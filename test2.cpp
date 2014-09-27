#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<climits>
#define infneg -9999   //Negative higher number constant
#define M 100
#define N 100
#define MIN 0.0000000000000000001
#define inflt 100000.00

using namespace std;

double simplex_sol[M];
double Dsimplex_sol[M];
double gomory_sol[M];
double fracX(double);
double fracX1(double);
int max_c;
int break_s = 0;
int break_ds = 0;
int constraint;
int response;
int B[N];
double c[M];
int solutioncheck(int [], double [], int);
double fracPart[M];
double num_c;
int condition[N];
int status = 1;
int greaterCond = 0;
double temp[M];
int conditionVar[N];
void dualTableForm(double a[N][M],double [],double [],int,int,int []);
class simplex_P{
public:
  void solve(double [][M],double [],double []);
  void solveForDS(double a[N][M], double b[N], double c[M]);
  void final_psol(double [][M],double [],double []);
private:
  double x[M];
  int col_lev;
  int flag = 0;
  int min_b;
  int vec_out;
  double minratio[M];
  int minratiominpos;
  int vec_in;
  double z, key;
  void calctemp(double *,double [][M],double [],int []);
  void modify(double a[N][M], double b[N]);
  void minimum(double *arr,int *arrminpos,int n, double a[N][M]);
  void minratioval(double [],int *arrminpos,int n);
  void solutionprint(double [][M],double [],double []);
  void display (double c[],double b[],double a[][M],int B[], double temp[N]);
  void totaldisplay(double c[M], double temp[N]);
};
void simplex_P::modify(double a[N][M], double b[N]){
int r,s;
    for(r = 0; r < constraint; r++){
        if(b[r] <= MIN){
            b[r] = 0.0;
        }
    }
    for(r = 0; r < constraint; r++){
        for(s = 0; s < constraint+max_c; s++){
            if(a[r][s] <= MIN){
            a[r][s] = 0.0;
        }
        }
    }
}
void simplex_P::display (double c[N],double b[N],double a[N][M],int B[N], double temp[N]){
    int i,j;
    totaldisplay(c,temp);
    for(i=0;i<constraint;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[B[i]],B[i]+1,b[i]);
        for(j=0;j<constraint+max_c;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}
void simplex_P::totaldisplay(double c[M], double temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<constraint+max_c;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<constraint+max_c;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<constraint+max_c;i++)
        printf("a[%d]\t",i+1);
    printf("\n");
}
void simplex_P::final_psol(double [][M],double [],double []){
    int i;
    printf("Final Solution:\n");
    for(i = 0; i < max_c; i++){
        printf("x[%d] = %2.2lf\n",i+1,simplex_sol[i]);
    }
    double f = 0.0;

    if(response == 1){
        for(i = 0; i < max_c; i++){
            f = f + c[i]*simplex_sol[i];
        }
        f += num_c;
        printf("Maximum Value = %2.2lf\n",f);
    }
    if(response == 2){
        for(i = 0; i < max_c; i++){
            f = f + (-1)*c[i]*simplex_sol[i];
        }
        f += num_c;
        printf("Minimum Value = %2.2lf\n",f);
    }
    printf("\n");
}
void simplex_P::solutionprint(double a[N][M],double b[N],double c[M]){
    int i;
    for(i = 0; i < constraint + max_c; i++){
        simplex_sol[i] = 0.0;
    }
    for(i = 0; i < constraint; i++){
            simplex_sol[B[i]] = b[i];
    }
}
void simplex_P::calctemp(double *temp,double a[N][M],double c[M],int B[N]){
    int i,j;
    for(i = 0 ; i < constraint + max_c ; i++){
        temp[i]=0;
        for(j = 0 ; j < constraint; j++){
            temp[i] = temp[i] + c[B[j]]*a[j][i];
        }
    temp[i] = temp[i] - c[i];
    }
}
void simplex_P::minimum(double *arr,int *arrminpos, int n, double a[N][M]){
    *arrminpos = -1;
    double arrmin = inflt;
    int i,val = 0,j;
    for(i = 0; i < n; i++){
        if(arr[i] < arrmin){
            arrmin = arr[i];
            *arrminpos = j = i;
        }
    }
    for(i = 0;i < constraint; i++){
        if(a[i][j] < 0.0){
            val++;
        }
    }
    if(val == constraint){
        *arrminpos = -1;
    }
}
void simplex_P::minratioval(double arr[],int *arrminpos, int n){
    int i;
    double arrmin;
    arrmin = arr[0];
    *arrminpos = 0;
    for(i = 0; i < n; i++){
        if(arr[i] <= arrmin){
            arrmin = arr[i];

            *arrminpos = i;
        }
    }

}
void simplex_P::solve(double a[N][M], double b[N], double c[M]){
    int k = 0,i,j;
    calctemp(temp, a, c, B);
    do{
        k++;
        z = 0;
        display (c,b,a,B,temp);
        printf("\n");
        printf("Stage: %d",k);
        printf("\nZj - cj Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%2.2lf ",temp[i]);
        }
        printf("\n");
        for(i = 0; i < max_c; i++){
            if(i == 0)
                printf("x%d >= 0 ",i+1);
            else
                printf(", x%d >= 0 ",i+1);
        }
        printf("\nB Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%d ",B[i]+1);
        }
        for(i = 0; i < constraint + max_c; i++){
            flag = 1;
            if(temp[i] < 0){
                for(j = 0 ; j < constraint; j++){
                    if(a[j][i] > 0.0){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 0){
                break;
            }
        }
        minimum(temp, &min_b, (constraint + max_c),a);
        if(min_b == -1){
            break_s = 1;
        }
        vec_in = min_b;
        for(i = 0; i < M; i++){
            minratio[i] = 0.0;
        }

        for(i = 0; i < constraint; i++){
            if(a[i][vec_in] <= 0.0){
                minratio[i] = inflt;
            }
            else{
                minratio[i] = b[i]/a[i][vec_in];
            }
        }

        printf("\nMin Ratio Matrix\n");
        for(i = 0; i < constraint; i++){
            printf("%2.2lf ",minratio[i]);
        }
        minratioval(minratio, &minratiominpos, constraint);
        vec_out = minratiominpos;
        for(i = 0; i < constraint + max_c; i++){
            x[i] = 0;
        }
        printf("\n");
        for(i = 0; i < constraint; i++){
            x[B[i]] = b[i];
            printf("x[%d] = %0.3g\n",B[i]+1,b[i]);
        }
        for(i = 0; i < constraint; i++){
            z = z + c[i]*x[i];
        }
        if(response == 1){
            printf("Max(z) = %2.2lf",z);
        }
        if(response == 2){
            printf("Min(z) = %2.2lf",z);
        }
        printf("\nB Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%d ",B[i]+1);
        }
        col_lev = B[vec_out]+1;
        B[vec_out]=vec_in;
        printf("\nVariavle_in = X%d\t",vec_in+1);
        printf("variable_out = X%d, vec_out = %d\n",col_lev, vec_out);
        key = a[vec_out][vec_in];
        b[vec_out] = b[vec_out]/key;
        for(i = 0; i < constraint + max_c; i++)
            a[vec_out][i] = a[vec_out][i]/key;
        for(i = 0; i < constraint; i++){
            if(vec_out == i){
            continue;
            }
            key = a[i][vec_in];
            for(j = 0 ; j < (constraint + max_c) ; j++){
                a[i][j]=a[i][j]-a[vec_out][j]*key;
            }
            b[i] = b[i] - b[vec_out]*key;
        }
        calctemp(temp, a, c, B);
        printf(" Matrix(Zj - Cj for next iteration):\n");
        for(i = 0; i < constraint + max_c; i++){
            printf("%2.2lf ",temp[i]);
        }
        printf("\n");

        for(i = 0; i < constraint + max_c; i++){
            flag = 1;
            if(temp[i] < 0){
                for(j = 0 ; j < constraint; j++){
                    if(a[j][i] > 0.0){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 0){
                break;
            }
        }
        if(break_s == 1){
            printf("\nUNBOUNDED SOLUTION\n");
            flag = 1;
        }
        printf("\n");
    }while(flag == 0);
    if(break_s != 1){
            display (c,b,a,B,temp);
            solutionprint(a,b,c);
            final_psol(a,b,c);
    }
}
void simplex_P::solveForDS(double a[N][M], double b[N], double c[M]){
    int k = 0,i,j;
    calctemp(temp, a, c, B);
    do{
        k++;
        z = 0;
        display (c,b,a,B,temp);
        printf("\n\n");
        printf("\n",k);
        printf("\nZj - cj Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%2.2lf ",temp[i]);
        }
        printf("\n");
        for(i = 0; i < max_c; i++){
            if(i == 0)
                printf("x%d >= 0 ",i+1);
            else
                printf(", x%d >= 0 ",i+1);
        }
        printf("\nB Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%d ",B[i]+1);
        }
        for(i = 0; i < constraint + max_c; i++){
            flag = 1;
            if(temp[i] < 0){
                flag = 0;
                break;
            }
        }
        minimum(temp, &min_b, (constraint + max_c),a);
        vec_in = min_b;


        for(i = 0; i < M; i++){
            minratio[i] = 0.0;
        }

        for(i = 0; i < constraint; i++){
            if(a[i][vec_in] <= 0.0){
                minratio[i] = inflt;
            }
            else{
                minratio[i] = b[i]/a[i][vec_in];
            }
        }

        printf("\nMin Ratio Matrix\n");
        for(i = 0; i < constraint; i++){
            printf("%2.2lf ",minratio[i]);
        }
        minratioval(minratio, &minratiominpos, constraint);
        vec_out = minratiominpos;


        for(i = 0; i < constraint + max_c; i++){
            x[i] = 0;
        }
        printf("\n");
        for(i = 0; i < constraint; i++){
            x[B[i]] = b[i];
            printf("x[%d] = %0.3g\n",B[i]+1,b[i]);
        }

        for(i = 0; i < constraint; i++){
            z = z + c[i]*x[i];
        }
        if(response == 1){
            printf("Max(z) = %2.2lf",z);
        }
        if(response == 2){
            printf("Min(z) = %2.2lf",z);
        }
        printf("\nB Matrix\n");
        for(i = 0; i < constraint + max_c ; i++){
            printf("%d ",B[i]+1);
        }

        col_lev = B[vec_out]+1;
        B[vec_out]=vec_in;
        printf("\nVariable_in = X%d\t",vec_in+1);
        printf("Variable_out = X%d, vec_out = %d\n",col_lev, vec_out);


        key = a[vec_out][vec_in];
        b[vec_out] = b[vec_out]/key;
        for(i = 0; i < constraint + max_c; i++)
            a[vec_out][i] = a[vec_out][i]/key;
        for(i = 0; i < constraint; i++){
            if(vec_out == i){
            continue;
            }
            key = a[i][vec_in];
            for(j = 0 ; j < (constraint + max_c) ; j++){
                a[i][j]=a[i][j]-a[vec_out][j]*key;
            }
            b[i] = b[i] - b[vec_out]*key;
        }
        calctemp(temp, a, c, B);
        printf("Matrix(Zj - Cj for next iteration):\n");
        for(i = 0; i < constraint + max_c; i++){
            printf("%2.2lf ",temp[i]);
        }
        printf("\n");

        int checkCond = 0;
        for(i = 0; i < constraint + max_c; i++){
            flag = 0;
            if(temp[i] >= 0){
                checkCond++;
            }
            if(checkCond == constraint + max_c){
                printf("\nBreaking out\n");
                flag = 1;
                break;
            }
        }
        printf("\n");
    }while(flag == 0);
     display (c,b,a,B,temp);
    printf("\n");
}
class dualsimplex_P{

public:
    void solve(double [][M],double [],double [],int,int);
    void final_psol(double [][M],double [],double [],int,int);
private:
    double x[M];

    int flag = 0;
    int min_b;
    int vec_out;
    double maxratio[M];
    int Mpos;
    int vec_in;
    double z, key;
    void calctemp(double *,double [][M],double [],int [],int,int);
    void minimum(double *arr,int *arrminpos,int n,double a[N][M],int);
    void maximum(double *arr,int *arrminpos,int n);
    void solutionprint(double [][M],double [],double [],int,int);
    void display (double c[],double b[],double a[][M],int B[], double temp[N]);
    void totaldisplay(double c[M], double temp[N]);
    void modify(double a[N][M], double b[N],int cons, int countz);
};
void dualsimplex_P::modify(double a[N][M], double b[N], int cons, int countz){
    int r,s;
    for(r = 0; r < cons; r++){
        if(b[r] <= MIN){
            b[r] = 0.0;
        }
    }
    for(r = 0; r < cons; r++){
        for(s = 0; s < cons+countz; s++){
            if(a[r][s] <= MIN){
            a[r][s] = 0.0;
            }
        }
    }
}
void dualsimplex_P::display(double c[N],double b[N],double a[N][M],int B[N], double temp[N]){
    int i,j;
    totaldisplay(c,temp);
    for(i=0;i<constraint;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[B[i]],B[i]+1,b[i]);
        for(j=0;j<constraint+max_c;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}
void dualsimplex_P::totaldisplay(double c[M], double temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<constraint+max_c;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<constraint+max_c;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<constraint+max_c;i++)
        printf("a[%d]\t",i+1);
    printf("\n");
}
void dualsimplex_P::calctemp(double *temp,double a[N][M],double c[M],int B[N], int cons, int countz){

    int i,j;
    for(i = 0 ; i < cons + countz ; i++){
        temp[i]=0;
        for(j = 0 ; j < cons; j++){
            temp[i] = temp[i] + c[B[j]]*a[j][i];
        }
    temp[i] = temp[i] - c[i];
    }
}
void dualsimplex_P::minimum(double *arr,int *arrminpos, int n, double a[N][M], int countz){

    int i, arrmin,j,val = 0;
    arrmin = arr[0];
    *arrminpos = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < arrmin){
            arrmin = arr[i];
            *arrminpos = j = i;
        }
    }

    for(i = 0;i < n+countz; i++){
        if(a[j][i] >= 0.0){

            val++;
        }
    }
    if(val == n+countz){
        *arrminpos = -1;
    }
}
void dualsimplex_P::maximum(double *arr,int *arrmaxpos, int n){
    int i, arrmax;
    arrmax = infneg;
    *arrmaxpos = 0;
    for(i = 0; i < n; i++){
        if((arr[i] > arrmax) && (arr[i] < 0.0)){
            arrmax = arr[i];
            *arrmaxpos = i;
        }
    }
}
void dualsimplex_P::solve(double a[N][M], double b[N], double c[M], int cons, int countz){
    int k = 0,i,j;
    double solution[M];
    do{
        k++;

        printf("\n");
        for(i = 0; i < cons; i++){
            flag = 1;
            if(b[i] < 0){
                for(j = 0 ; j < cons+countz; j++){
                    if(a[i][j] < 0.0){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 0){
                break;
            }
        }
    z = 0;
    display(c,b,a,B,temp);
    printf("Stage: %d\n",k);
    printf("\nB Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%d ",B[i]+1);
    }
    printf("\n temp Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%.2f ",temp[i]);
    }
    calctemp(temp, a, c, B, constraint, max_c);
    printf("\nZj - cj Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%2.2lf ",temp[i]);
    }

    minimum(b,&min_b,cons,a,countz);
    if(min_b == -1){
            break_ds = 1;
    }
    vec_out = B[min_b];


    for(i = 0; i < M; i++){
      maxratio[i] = infneg;
    }

    for(i = 0; i < cons + countz; i++){
      if(a[min_b][i] == 0){
        maxratio[i] = inflt;
        continue;
      }
      if(a[min_b][i] > 0){
        maxratio[i] = inflt;
        continue;
      }
      maxratio[i] = temp[i]/a[min_b][i];
    }
    maximum(maxratio,&Mpos,cons + countz);
    vec_in = Mpos;
    printf("\nMax Ratio Matrix\n");
        for(i = 0; i < cons + countz; i++){
            printf("%2.2lf ",maxratio[i]);
        }
    for(i = 0; i < cons + countz; i++){
      x[i] = 0;
    }
    printf("\n");
    for(i = 0; i < cons; i++){
      x[B[i]] = b[i];
      printf("x[%d] = %0.3g\n",B[i]+1,b[i]);
    }

    for(i = 0; i < cons; i++){
      z = z + c[i]*x[i];
    }

    if(response == 1){
        printf("Max(z) = %2.2lf",z);
    }
    if(response == 2){
        printf("Min(z) = %2.2lf",z);
    }
    printf("\nVariable_in = X%d\t",vec_in+1);
    printf("Variable_out = X%d\n",vec_out+1);
    B[min_b]=vec_in;
    key = a[min_b][vec_in];
    b[min_b] = b[min_b]/key;
    for(i = 0; i < cons + countz; i++)
      a[min_b][i] = a[min_b][i]/key;
    for(i = 0; i < constraint; i++){
      if(min_b == i){
        continue;
      }
      key = a[i][vec_in];
      for(j = 0 ; j < (cons + countz) ; j++){
        a[i][j]=a[i][j]-a[min_b][j]*key;
      }
      b[i] = b[i] - b[min_b]*key;
    }
    for(i = 0; i < cons; i++){
        flag = 1;
        if(b[i] < 0){

            for(j = 0 ; j < cons+countz; j++){

                if(a[i][j] < 0.0){

                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(break_ds == 1){
            printf("\nUNBOUNDED SOLUTION\n");
            flag = 1;
    }
    printf("\n");
    solutionprint(a,b,c,constraint,max_c);

    }while(flag==0);
    printf("\n");
    if(break_ds != 1){
            display(c,b,a,B,temp);
            final_psol(a,b,c,constraint,max_c);
    }
}
void dualsimplex_P::final_psol(double [][M],double [],double [], int cons, int countz){
    int i;
    printf("\Final solution of dual simplex\n\n");
    for(i = 0; i < countz; i++){
        printf("x[%d] = %2.2lf\n",i+1,Dsimplex_sol[i]);
    }
    double f = 0.0;
    if(response == 1){
        for(i = 0; i < max_c; i++){
        f = f + c[i]*Dsimplex_sol[i];
        }
        f += num_c;
        printf("Maximum_value = %2.2lf\n",f);
    }
    if(response == 2){
        for(i = 0; i < max_c; i++){
        f = f + (-1)*c[i]*Dsimplex_sol[i];
        }
        f += num_c;
        printf("Minimum_value = %2.2lf\n",f);
    }
    printf("\n");
}
void dualsimplex_P::solutionprint(double a[N][M],double b[N],double c[M], int cons, int countz){
    int i;
    for(i = 0; i < cons + countz; i++){
        Dsimplex_sol[i] = 0.0;
    }
    for(i = 0; i < cons; i++){
            Dsimplex_sol[B[i]] = b[i];
    }
}
int main(){
    double a[N][M];
    double b[N];
    int i,j;
    fflush(stdout);
    for(i = 0; i < M ; i++){
        c[i] = fracPart[i] = temp[i] = 0.0;
    }
    for(i = 0; i < N ; i++){
        for(j = 0 ; j < M ; j++){
            a[i][j] = 0.0;
        }
    }
    printf("\nEnter number of variables\n"); //
    fflush(stdout);
    scanf("%d",&max_c);
    printf("\n co-efficients of the objective function:\n"); //
    for(i = 0; i < max_c ; i++){
        fflush(stdout);
        scanf("%lf",&c[i]) ;
    }
    printf("\nEnter the constant :\n");
    fflush(stdout);
    scanf("%lf",&num_c);
    printf("\n1. Maximize 2. Minimize):\n");
    fflush(stdout);
    scanf("%d",&response);
    printf("\nobjective function:-\n");
    if(response == 1){
        printf("\nMax z = ");
    }
    if(response == 2){
        printf("\nMin z = ");
    }
    for(i = 0; i < max_c ; i++){
        if(i == 0)
            printf("%g*x%d",c[i],i+1);
        else
            printf(" + %g*x%d",c[i],i+1);
    }
    printf(" + %g",num_c);
    if(response == 1){
        for(i = 0; i < max_c;i++){
            c[i] = c[i];
        }
    }
    if(response == 2){
        for(i = 0; i < max_c;i++){
            c[i] = c[i]*(-1);
        }
    }

    for(i = 0; i < max_c;i++){
        if(c[i] < 0){
            greaterCond++;
        }
    }
    printf("\n\nNumber of constraints\n");
    fflush(stdout);
    scanf("%d",&constraint);

    printf("\nCo-efficient of constraints\n");
    for(i = 0 ; i < constraint ; i++){
        for(j = 0 ; j < max_c ; j++){
            fflush(stdout);
            scanf("%lf",&a[i][j]);
        }
    }
    printf("\n1. Less than  2. More than 3. Equal to\n");
    for(i = 0; i < constraint; i++){
        fflush(stdout);
        scanf("%d",&condition[i]);
        if(condition[i] == 2){
            status = 0;

        }
        if(condition[i] == 3){
            status = 2;
        }
    }

    for(i = 0; i < constraint; i++){
        if(condition[i] == 3 || condition[i] == 2){
            status = 2;
        }
    }
    printf("\nEnter right hand side values\n");
    for(i = 0 ; i < constraint ; i++){
        fflush(stdout);
        scanf("%lf",&b[i]);
    }
    for(i = 0 ; i < max_c + constraint ; i++){
        B[i] = i + max_c;
    }
    printf("\nCondition for variables (1. Greater than or equal to  2. Lesser than or equal to)\n");
    for(i =0 ; i < max_c;i++){
        fflush(stdout);
        scanf("%d",&conditionVar[i]);
        if(conditionVar[i] == 2){
            c[i] = (-1)*c[i];
            for(j = 0; j < constraint; j++){
                a[j][i] = (-1)*a[j][i];
            }
        }
    }
    fflush(stdout);
    printf("\n");
    if(response == 1){
        printf("Problem :\nMax z = ");
        for(i = 0; i < max_c ; i++){
            if(i == 0)
                printf("%g*x%d",c[i],i+1);
            else
                printf(" + %g*x%d",c[i],i+1);
        }
        printf(" + %g",num_c);
    }
    if(response == 2){
        printf("\nProblem :\nMin z = ");
        for(i = 0; i < max_c ; i++){
            if(i == 0)
                printf("%g*x%d",(-1)*c[i],i+1);
            else
                printf(" + %g*x%d",(-1)*c[i],i+1);
        }
        printf(" + %g",num_c);
    }
    printf("\n");
    for(i = 0 ; i < constraint ; i++){
        for(j = 0 ; j < max_c ; j++){
            if(j == 0)
                printf(" %g*x%d ",a[i][j],j+1);
            else
                printf(" + %g*x%d ",a[i][j],j+1);
        }
        if(condition[i] == 2){
            printf(" >= %g\n",b[i]);
        }
        else if(condition[i] == 3){
            printf(" = %g\n",b[i]);
        }
        else{
            printf(" <= %g\n",b[i]);
        }
    }

    for(i = 0; i < max_c; i++){
        if(i == max_c-1){
            if(conditionVar[i] == 1){
                printf("x%d >= 0\n",i+1);
            }
            else{
                printf("x%d <= 0\n",i+1);
            }
        }
        else{
            if(conditionVar[i] == 1){
                printf("x%d >= 0, ",i+1);
            }
            else{
                printf("x%d <= 0, ",i+1);
            }
        }
    }
    printf("\n");
    simplex_P simple;
    dualsimplex_P dsp1;
    if(status == 0 && greaterCond == max_c){
        printf("\nSolving by Dual Simplex\n\n");
        for(i = 0 ; i < constraint ; i++){
            a[i][j++] = 1;
        }
        for(i = 0; i < constraint; i++){
            if(condition[i] == 2){
                b[i] = (-1)*b[i];
                for(j = 0; j < max_c; j++){
                    a[i][j] = (-1)*a[i][j];
                }
            }
        }
        dsp1.solve(a,b,c,constraint,max_c);
        for(i = 0; i < max_c; i++){
            gomory_sol[i] = Dsimplex_sol[i];
        }
    }
    if(status == 0 && greaterCond < max_c){
        printf("\nSolving by Dual Simplex using Simplex Method\n\n");
        for(i = 0 ; i < constraint ; i++){
            a[i][j++] = 1;
        }
        for(i = 0; i < constraint; i++){
            if(condition[i] == 2){
                b[i] = (-1)*b[i];
                for(j = 0; j < max_c; j++){
                    a[i][j] = (-1)*a[i][j];
                }
            }
        }
        simple.solveForDS(a,b,c);
        dsp1.solve(a,b,c,constraint,max_c);
        for(i = 0; i < max_c; i++){
            gomory_sol[i] = Dsimplex_sol[i];
        }
    }
    if(status == 1){
        printf("\nSolving by Simplex\n\n");
        for(i = 0 ; i < constraint ; i++){
            a[i][j++] = 1;
        }
        simple.solve(a,b,c);

        for(i = 0; i < max_c; i++){
            gomory_sol[i] = simplex_sol[i];
        }
    }
    if(status == 2){
        printf("\nSolving by Charne's M Method\n\n");
        int r = max_c;
        for(i = 0 ; i < constraint ; i++){
            if(condition[i] == 2){
                a[i][j++] = -1;
                c[j] = -100000.00;
                a[i][j++] = 1;
                B[i] = r+1;
                max_c++;
                r++;
            }
            else if(condition[i] == 3){
                c[j] = -100000.00;
                a[i][j++] = 1;
                B[i] = r;
            }
            else{
                a[i][j++] = 1;
                B[i] = r;
            }
            r++;
        }
        for(i = constraint; i < N; i++){
            B[i] = r;
            r++;
        }
        simple.solve(a,b,c);
        for(i = 0; i < max_c; i++){
            gomory_sol[i] = simplex_sol[i];
        }
    }
    dualsimplex_P dsp;
    printf("break_s = %d, break_ds = %d\n",break_s,break_ds);
    if(break_s != 1 || break_ds != 1){
        dualTableForm(a,b,fracPart,constraint,max_c,B);
        constraint++;
        int status1 = 0;
        while(solutioncheck(B,fracPart,constraint) == 0){
            status1 = 1;
            dsp.solve(a,b,c,constraint,max_c);
            dualTableForm(a,b,fracPart,constraint,max_c,B);
            constraint++;
        }
        if(status1 == 1){
            for(i = 0; i < max_c; i++){
                gomory_sol[i] = Dsimplex_sol[i];
            }
        }
    }
    printf("\Final solution:\n");
    if(break_s == 1){
        printf("\nUNBOUNDED SOLUTION OR NO SOLUTION\n");
    }
    if(break_ds == 1){
        printf("\nUNBOUNDED SOLUTION OR NO SOLUTION\n");
    }
    else{
        for(i = 0; i < max_c; i++){
             printf("x[%d] = %2.2lf\n",i+1,gomory_sol[i]);
        }
        double f = 0.0;
        if(response == 1){
            for(i = 0; i < max_c; i++){
                f = f + c[i]*gomory_sol[i];
            }
            f += num_c;
            printf("Maximum Value = %2.2lf\n",f);
        }
        if(response == 2){
            for(i = 0; i < max_c; i++){
                f = f + (-1)*c[i]*gomory_sol[i];
                f += num_c;
            }
            printf("Minimum Value = %2.2lf\n",f);
        }
        printf("\n--------------------------------------------------------------------------------\n");
    }
    printf("\nPress any key for exit...\n");
    return 0;
}
int solutioncheck(int B[N], double fracPart[], int constraint){
    int flag = 1,i,condition1,condition2,condition3,condition4,condition5;
    printf("\n");
    for(i = 0; i < constraint; i++){
        if(B[i] < max_c && (fracPart[B[i]] != 0.0)){
            condition1 = B[i] <= max_c && ( (fracPart[B[i]] != 0.0) || (fracPart[B[i]] != -0.0) );
            condition2 = B[i] <= max_c;
            condition3 = (fracPart[B[i]] != 0.0);
            condition4 = (fracPart[B[i]] != -0.0);
            condition5 = (fracPart[B[i]] == -0.0);
            flag = 0;
            break;
        }
    }
    return flag;
}
void dualTableForm(double a[N][M], double b[N], double fracPart[N], int cons, int countz, int B[N]){
    int i,j,posFrac;
    double maxFrac;
    printf("\nB Matrix:\n");
    for(j = 0; j < cons+countz; j++){
        printf("%d ",B[j]);
    }
    printf("\nb Matrix:\n");
    for(j = 0; j < cons+countz; j++){
        printf("%2.2lf ",b[j]);
    }
    for(i = 0; i < cons+countz; i++){
        if(B[i] < countz){
            fracPart[B[i]] = fracX(b[i]);
            printf("i = %d, fracPart[%d] = %2.2lf, fracX(%2.2lf) = %2.2lf\n",i,B[i],fracPart[B[i]],b[i],fracX(b[i]));
        }
    }
    printf("\nFracPart Matrix:\n");
    for(j = 0; j < cons+countz; j++){
        printf("%2.2lf ",fracPart[j]);
    }
    printf("\n");
    maxFrac = 0.0;
    for(i = 0; i < cons+countz; i++){
        if(fracPart[i] >= maxFrac){
            posFrac = i;
            maxFrac = fracPart[i];
        }
    }
    printf("maxFrac = %2.2lf, posFrac= %d\n",maxFrac,posFrac);
    printf("\nEntering fraction column:\n");
    for(i = 0; i < cons; i++){
    if(B[i] == posFrac){
        for(j = 0; j < countz + cons; j++){
                if(fracX(a[i][j]) == 0.0){
                    a[cons][j] = 0.0;
                    printf("%2.2lfx%d + ",a[cons][j],j+1);
                }
                else{
                    a[cons][j] = (-1)*fracX(a[i][j]);
                     printf("%2.2lfx%d + ",a[cons][j],j+1);
                }
        }
        a[cons][countz+cons] = 1.0;

        if(fracX(b[i]) == 0.0){
            b[cons] = 0.0;
        }
        else{
            b[cons] = (-1)*fracX(b[i]);
            printf(" <= %2.2lf",b[cons]);
        }
        break;
    }
    else{continue;}
  }
  printf("\nIn Equation:\n");
  for(i = 0; i < cons; i++){
    if(B[i] == posFrac){
        for(j = 0; j < countz + cons; j++){
                if(fracX(a[i][j]) == 0.0){
                    a[cons][j] = 0.0;
                    printf("%2.2lfx%d + ",a[cons][j],j+1);
                }
                else{
                    a[cons][j] = (-1)*fracX(a[i][j]);
                     printf("%2.2lfx%d + ",a[cons][j],j+1);
                }
        }
        a[cons][countz+cons] = 1.0;
        printf("%2.2lfx%d",a[cons][countz+cons],countz+cons+1);
        if(fracX(b[i]) == 0.0){
            b[cons] = 0.0;
        }
        else{
            b[cons] = (-1)*fracX(b[i]);
            printf(" == %2.2lf",b[cons]);
        }
        break;
    }
    else{continue;}
  }
  j = cons;
  for( i = cons+countz ; i < N; i++){
    B[j] = i;
    j++;
  }
}
double fracX1(double x){
    double i,result;
    if(x < 0.0){
        i = ceil(x);
    }
    else{
        i = floor(x);
    }
    printf("\nx = %2.2lf, i = %2.2lf, floor(%2.2lf) = %2.2lf\n",x,i,x,floor(x));
    result = x - i;
    return result;
}
double fracX(double x){
    double result;
    double y;
    y = fmod(x, 1.0);
    printf("\nx = %2.2lf, y = %2.2lf\n",x,y);
    return y;
}
