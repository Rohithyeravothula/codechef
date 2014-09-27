#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>

#define Inf -999
#define M 100
#define N 100
#define MIN 0.0000000000000000001
#define Inf_F 1000.00

using namespace std;

int NV;  /* Number of variables */
int NC;      /* Number of constraints for the problem */
int MM;        /* For Max or Min*/
int basic[N];        /*basic variable */
float c[M];          /* co-efficient of the objective function Max(z) */
float solutionSimplex[M];  /* solution of simplex table */
float solutionDSimplex[M]; /* solution of dual simplex table */
float solutionGomoryCut[M]; /* Solution of gomory cut problem */
int checkSolution(int [], float [], int); /* Integer checking function */
float fracX(float);                       /* Fractional function */
float fracPart[M];                        /* Stores fractional part of basic variables in array */
int ifs[M];
int K=0;
float obj_c;

void dualTableForm(float a[N][M],float [],float [],int,int,int []);
class simplexProblem{
public:
  void solve(float [][M],float [],float []);  //simplex problem solver
  void printFinalSolution(float [][M],float [],float []);   // prints final solution for simplex
private:
  float x[M];
  int leavingcol;
  float temp[M];  // Zj-Cj/
  int flag = 0;  // Terminating variable /
  int min_posval;   // Stores the minimum valued position of {Zj-Cj}
  int col_out;  // Stores the column number which goes out
  float minratio[M];  // Stores the value of the ratio Zj-Cj/a[i][j]
  int minratiominpos;  //Stores the minimum valued position of b[i]/a[i][j]
  int col_in;   // Stores the incoming column number
  float z, key;
  void calctemp(float *,float [][M],float [],int []);
  void modify(float a[N][M], float b[N]);
  void minimum(float *arr,int *arrminpos,int n);
  void minratioval(float *arr,int *arrminpos,int n);
  void printSolution(float [][M],float [],float []);
  void display (float c[],float b[],float a[][M],int basic[], float temp[N]);
  void displayframe(float c[M], float temp[N]);
  int checkinf(int ifs[],int);
};
int simplexProblem::checkinf(int ifs[],int P)
{
    int i;
    for(i=0;i<NV;i++)
        if (ifs[i]==P)
        return 1;
    return 0;
}
void simplexProblem::display (float c[N],float b[N],float a[N][M],int basic[N], float temp[N]){
    int i,j;
    displayframe(c,temp);
    for(i=0;i<NC;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[basic[i]],basic[i]+1,b[i]);
        for(j=0;j<NC+NV;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}
void simplexProblem::displayframe(float c[M], float temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<NC+NV;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<NC+NV;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<NC+NV;i++)
        printf("a[%d]\t",i+1);
    printf("\n");
}

void simplexProblem::printFinalSolution(float [][M],float [],float []){
    int i;
    printf("\nSimplex solution:\n");
    for(i = 0; i < NV; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionSimplex[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionSimplex[i];
    }
    if(MM == 1){
        printf("Maximum Value = %2.2f\n",f-obj_c);
    }
    if(MM == 2){
        printf("Minimum Value = %2.2f\n",f-obj_c);
    }
    printf("\n");
}
void simplexProblem::printSolution(float a[N][M],float b[N],float c[M]){
    int i;
    for(i = 0; i < NC + NV; i++){
        solutionSimplex[i] = 0.0;
    }
    for(i = 0; i < NC; i++){
            solutionSimplex[basic[i]] = b[i];
    }
}
void simplexProblem::calctemp(float *temp,float a[N][M],float c[M],int basic[N]){
    int i,j;
    for(i = 0 ; i < NC + NV ; i++){
        temp[i]=0;
        for(j = 0 ; j < NC; j++){
            temp[i] = temp[i] + c[basic[j]]*a[j][i];
        }
    temp[i] = temp[i] - c[i];
    }
}
void simplexProblem::minimum(float *arr,int *arrminpos, int n){
    *arrminpos = -1;
    float arrmin = Inf_F;
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] < arrmin){
            arrmin = arr[i];
            *arrminpos = i;
        }
    }
}
void simplexProblem::minratioval(float *arr,int *arrminpos, int n){
    int i, arrmin;
    arrmin = arr[0];
    *arrminpos = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < arrmin){
            arrmin = arr[i];
            *arrminpos = i;
        }
    }
}
int H=0; //edited
void simplexProblem::solve(float a[N][M], float b[N], float c[M]){
    int k = 0,i,j;
    calctemp(temp, a, c, basic);
       do{
        k++;
        z = 0;
        display (c,b,a,basic,temp);
        printf("\n\n");
        printf("Iteration:\n",k);
        printf("\nZj - cj Matrix\n");
        for(i = 0; i < NC + NV ; i++){
            printf("%2.2f ",temp[i]);
        }
        printf("\n");
        for(i = 0; i < NV; i++){
            if(i == 0)
                printf("x%d >= 0 ",i+1);
            else
                printf(", x%d >= 0 ",i+1);
        }
        printf("\nBasic Matrix\n");
        for(i = 0; i < NC + NV ; i++){
            printf("%d ",basic[i]+1);
        }
        for(i = 0; i < NC + NV; i++){
            flag = 1;
            if(temp[i] < 0){
                flag = 0;
                break;
            }
        }
        minimum(temp, &min_posval, (NC + NV));
        col_in = min_posval;

        for(i = 0; i < M; i++){
            minratio[i] = 0.0;
        }
        for(i = 0; i < NC; i++){
            if(a[i][col_in] <= 0.0){
                minratio[i] = Inf_F;
            }
            else{
                minratio[i] = b[i]/a[i][col_in];
            }
        }
        printf("\nMin Ratio Matrix\n");
        for(i = 0; i < NC; i++){
            printf("%2.2f ",minratio[i]);
        }
        minratioval(minratio, &minratiominpos, NC);
        col_out = minratiominpos;
        for(i = 0; i < NC + NV; i++){
            x[i] = 0;
        }
        printf("\n");
        for(i = 0; i < NC; i++){
            x[basic[i]] = b[i];
            printf("x[%d] = %0.3g\n",basic[i]+1,b[i]);
        }

        for(i = 0; i < NC; i++){
            z = z + c[i]*x[i];
        }
        if(MM == 1){
            printf("Max(z) = %2.2f",z);
        }
        if(MM == 2){
            printf("Min(z) = %2.2f",z);
        }
        printf("\nBasic Matrix\n");
        for(i = 0; i < NC + NV ; i++){
            printf("%d ",basic[i]+1);
        }
        leavingcol = basic[col_out]+1;
        basic[col_out]=col_in;
        printf("\nVariable_in = X%d\t",col_in+1);
        printf("Variable_out = X%d, col_out = %d\n",leavingcol, col_out);
        key = a[col_out][col_in];
        b[col_out] = b[col_out]/key;
        for(i = 0; i < NC + NV; i++)
            a[col_out][i] = a[col_out][i]/key;
        for(i = 0; i < NC; i++){
            if(col_out == i){
            continue;
            }
            key = a[i][col_in];
            for(j = 0 ; j < (NC + NV) ; j++){
                a[i][j]=a[i][j]-a[col_out][j]*key;
            }
            b[i] = b[i] - b[col_out]*key;
        }
        calctemp(temp, a, c, basic);
        printf("Temp Matrix(Zj - Cj for next iteration):\n");
        for(i = 0; i < NC + NV; i++){
            printf("%2.2f ",temp[i]);
        }
        printf("\n");
        for(i = 0; i < NC + NV; i++){
            flag = 1;
            if(temp[i] < 0){
                flag = 0;
                break;
            }
        }
        printf("\n");
    }while(flag == 0);
    for(i=0;i<NC;i++)
    {

        if(checkinf(ifs,basic[i]))
            H=1;

    }

    display (c,b,a,basic,temp);
    printSolution(a,b,c);
    printFinalSolution(a,b,c);
}
class dualSimplexProblem{
public:
    void solve(float [][M],float [],float [],int,int);
    void printFinalSolution(float [][M],float [],float [],int,int);
private:
    float x[M];   //values of variables x1,x2,..
    float temp[M];
    int flag = 0;
    int min_posval;
    int col_out;
    float maxratio[M];
    int mrmp;  // Stores the minimum valued position of b[i]/a[i][j]
    int col_in;
    float z, key;
    void calctemp(float *,float [][M],float [],int [],int,int);
    void minimum(float *arr,int *arrminpos,int n);
    void maximum(float *arr,int *arrminpos,int n);
    void printSolution(float [][M],float [],float [],int,int);
    void display (float c[],float b[],float a[][M],int basic[], float temp[N]);
    void displayframe(float c[M], float temp[N]);
    void modify(float a[N][M], float b[N],int cons, int countz);
};
void dualSimplexProblem::display(float c[N],float b[N],float a[N][M],int basic[N], float temp[N]){
    int i,j;
    displayframe(c,temp);
    for(i=0;i<NC;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[basic[i]],basic[i]+1,b[i]);
        for(j=0;j<NC+NV;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}
void dualSimplexProblem::displayframe(float c[M], float temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<NC+NV;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<NC+NV;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<NC+NV;i++)
        printf("a[%d]\t",i+1);
    printf("\n");
}
void dualSimplexProblem::calctemp(float *temp,float a[N][M],float c[M],int basic[N], int cons, int countz){

    int i,j;
    for(i = 0 ; i < cons + countz ; i++){
        temp[i]=0;
        for(j = 0 ; j < cons; j++){
            temp[i] = temp[i] + c[basic[j]]*a[j][i];
        }
    temp[i] = temp[i] - c[i];
    }
}
void dualSimplexProblem::minimum(float *arr,int *arrminpos, int n){

    int i, arrmin;
    arrmin = arr[0];
    *arrminpos = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < arrmin){
            arrmin = arr[i];
            *arrminpos = i;
        }
    }
}
void dualSimplexProblem::maximum(float *arr,int *arrmaxpos, int n){
    int i, arrmax;
    arrmax = Inf;
    *arrmaxpos = 0;
    for(i = 0; i < n; i++){
        if((arr[i] > arrmax) && (arr[i] < 0.0)){
            arrmax = arr[i];
            *arrmaxpos = i;
        }
    }
}
void dualSimplexProblem::solve(float a[N][M], float b[N], float c[M], int cons, int countz){
    int k = 0,i,j;
    float solution[M];
    do{
        k++;
        printf("\n");
        for(i = 0; i < cons; i++){
            flag = 1;
            if(b[i] <= 0){
            flag = 0;
            break;
            }
        }
    z = 0;
    display(c,b,a,basic,temp);

    printf("\n stage %d:\n",k);
    printf("\nBasic Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%d ",basic[i]+1);
    }
    printf("\nTemp Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%.2f ",temp[i]);
    }
    calctemp(temp, a, c, basic, NC, NV);
    printf("\nZj - cj Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%.2f ",temp[i]);
    }
    minimum(b,&min_posval,cons);
    col_out = basic[min_posval];
    for(i = 0; i < M; i++){
      maxratio[i] = Inf;
    }
    for(i = 0; i < cons + countz; i++){
      if(a[min_posval][i] == 0){
        maxratio[i] = Inf_F;
        continue;
      }
      if(a[min_posval][i] > 0){
        maxratio[i] = Inf_F;
        continue;
      }
      maxratio[i] = temp[i]/a[min_posval][i];
    }
    maximum(maxratio,&mrmp,cons + countz);
    col_in = mrmp;
    printf("\nMax Ratio Matrix\n");
        for(i = 0; i < cons + countz; i++){
            printf("%2.2f ",maxratio[i]);
        }
    for(i = 0; i < cons + countz; i++){
      x[i] = 0;
    }
    printf("\n");
    for(i = 0; i < cons; i++){
      x[basic[i]] = b[i];
      printf("x[%d] = %0.3g\n",basic[i]+1,b[i]);
    }
    for(i = 0; i < cons; i++){
      z = z + c[i]*x[i];
    }
    if(MM == 1){
        printf("Max(z) = %2.2f",z);
    }
    if(MM == 2){
        printf("Min(z) = %2.2f",z);
    }
    printf("\n variable in = X%d\t",col_in+1);
    printf(" variable out = X%d\n",col_out+1);
    basic[min_posval]=col_in;
    key = a[min_posval][col_in];
    b[min_posval] = b[min_posval]/key;
    for(i = 0; i < cons + countz; i++)
      a[min_posval][i] = a[min_posval][i]/key;
    for(i = 0; i < NC; i++){
      if(min_posval == i){
        continue;
      }
      key = a[i][col_in];
      for(j = 0 ; j < (cons + countz) ; j++){
        a[i][j]=a[i][j]-a[min_posval][j]*key;
      }
      b[i] = b[i] - b[min_posval]*key;
    }
    for(i = 0; i < cons; i++){
        flag = 1;
        if(b[i] <= 0){
            flag = 0;
            break;
        }
    }
    printf("\n");
    printSolution(a,b,c,NC,NV);
    }while(flag==0);
    printf("\n");
    display(c,b,a,basic,temp);
    printFinalSolution(a,b,c,NC,NV);
}
void dualSimplexProblem::printFinalSolution(float [][M],float [],float [], int cons, int countz){
    int i;
    printf("\n Final solution:\n");
    for(i = 0; i < countz; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionDSimplex[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionDSimplex[i];
    }
    if(MM == 1){
        printf("Maximum Value = %2.2f\n",f);
    }
    if(MM == 2){
        printf("Minimum Value = %2.2f\n",f);
    }
    printf("\n");
}
void dualSimplexProblem::printSolution(float a[N][M],float b[N],float c[M], int cons, int countz){
    int i;
    for(i = 0; i < cons + countz; i++){
        solutionDSimplex[i] = 0.0;
    }
    for(i = 0; i < cons; i++){
            solutionDSimplex[basic[i]] = b[i];
    }
}
//edited
int cc[M];
int J;

int main(){
    int T;
    for(T=0;T<M;T++)
    ifs[T]=-1;

    float a[N][M];
    float b[N];
    int i,j;
    for(i = 0; i < M ; i++){
        c[i] = fracPart[i] = 0.0;
    }
    for(i = 0; i < N ; i++){
        for(j = 0 ; j < M ; j++){
            a[i][j] = 0.0;
        }
    }
    printf("\nEnter number of variables\n"); //
    scanf("%d",&NV);
    printf("\n objective function :\n"); //
    for(i = 0; i < NV ; i++){
        scanf("%f",&c[i]) ;
    }
    printf("enter the right hand side\n");
    scanf("%f",&obj_c);
    printf("\n 1. Maximize  2.Minimize\n");
    scanf("%d",&MM);
    if(MM == 1){
        for(i = 0; i < NV;i++){
            c[i] = c[i];
        }
    }
    if(MM == 2){
        for(i = 0; i < NV;i++){
            c[i] = c[i]*(-1);
        }
    }
    printf("\nProblem statement:-\n");
    if(MM == 1){
        printf("\nMax z = ");
    }
    if(MM == 2){
        printf("\nMin z = ");
    }
    for(i = 0; i < NV ; i++){
        if(i == 0)
            printf("%g*x%d",c[i],i+1);
        else
            printf(" + %g*x%d",c[i],i+1);
    }
    printf("%.2f",-obj_c);
    printf("\n\nEnter number of constraints\n");
    scanf("%d",&NC);

    printf("\nEnter the co-efficient fo constraints\n");
    for(i = 0 ; i < NC ; i++){
        for(j = 0 ; j < NV ; j++){
            scanf("%f",&a[i][j]);
        }
    }

    for(i = 0 ; i < NC ; i++){
        a[i][j++] = 1;
    }
    // edited
    printf("1.Greater then 2.less then 3.Equality\n");

    for(J=0;J<NC;J++)
    {

        scanf("%d",&cc[J]);

    }

    // edited
    printf("\nEnter values of bi's\n");
    for(i = 0 ; i < NC ; i++){
        scanf("%f",&b[i]);
    }
    for(i = 0 ; i < NV + NC ; i++){
        basic[i] = i + NV;
    }
    printf("\n");
    if(MM == 1){
        printf("\nThe Problem is :\nMax z = ");
    }
    if(MM == 2){
        printf("\nThe Problem is :\nMin z = ");
    }
    for(i = 0; i < NV ; i++){
        if(i == 0)
            printf("%g*x%d",c[i],i+1);
        else
            printf(" + %g*x%d",c[i],i+1);
    }


    // edited
    printf("\n");
    for(i = 0 ; i < NC ; i++){
        for(j = 0 ; j < NV ; j++){
            if(j == 0)
                printf(" %g*x%d ",a[i][j],j+1);
            else
                printf(" + %g*x%d ",a[i][j],j+1);
        }
        if(cc[i]==1)
        printf(" >= %g\n",b[i]);
        if(cc[i]==2)
        printf("<= %g\n",b[i]);
        if(cc[i]==3)
        printf("= %g\n",b[i]);

    }
    for(i = 0; i < NV; i++){
        if(i == NV-1){
            printf("x%d >= 0\n",i+1);
        }
        else{
            printf("x%d >= 0, ",i+1);
        }
    }

    printf("\n");
    for(i=0;i<M;i++)
    {
        if(cc[i]==1)
            {a[i][NV++]=1;
            ifs[K]=NV;
            K=K+1;
            }

    }

    simplexProblem simple;
    simple.solve(a,b,c);
    if(H==1)
        printf("infeasible solution\n");
    else
    {
    dualSimplexProblem dsp;
    dualTableForm(a,b,fracPart,NC,NV,basic);
    NC++;
    for(i = 0; i < NV; i++){
        solutionGomoryCut[i] = solutionSimplex[i];
    }
    int status = 0;
    while(checkSolution(basic,fracPart,NC) == 0){
        status = 1;
        dsp.solve(a,b,c,NC,NV);
        dualTableForm(a,b,fracPart,NC,NV,basic);
        NC++;
    }
    if(status == 1){
        for(i = 0; i < NV; i++){
        solutionGomoryCut[i] = solutionDSimplex[i];
        }
    }

    printf("\n");
    for(i = 0; i < NV; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionGomoryCut[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionGomoryCut[i];
    }
    if(MM == 1){
        printf("Maximum Value = %2.2f\n",f);
    }
    if(MM == 2){
        printf("Minimum Value = %2.2f\n",f);
    }
    printf("\n");
    printf("\nStatus = %d\n",status);

    return 0;
    }
}
int checkSolution(int basic[N], float fracPart[], int NC){
    int flag = 1,i;
    printf("\n");
    for(i = 0; i < NC; i++){
        if(basic[i] <= NV && fracPart[basic[i]] != 0.0){
            flag = 0;
            break;
        }
    }
    return flag;
}
void dualTableForm(float a[N][M], float b[N], float fracPart[N], int cons, int countz, int basic[N]){
    int i,j,posFrac;
    float maxFrac;
    for(i = 0; i <= cons; i++){
        if(basic[i] <= countz){
            fracPart[basic[i]-1] = fracX(b[i]);
        }
    }
    maxFrac = 0.0;
    for(i = 0; i < cons; i++){
        if(fracPart[i] >= maxFrac){
            posFrac = i;
            maxFrac = fracPart[i];
        }
    }
  for(i = 0; i < cons; i++){
    if(basic[i] == posFrac){
        if(fracX(b[i]) == 0.0){
            b[cons] = 0.0;
        }
        else{
            b[cons] = -fracX(b[i]);
        }
        for(j = 0; j < countz + cons; j++){
                if(fracX(a[i][j]) == 0.0){
                    a[cons][j] = 0.0;
                }
                else{
                    a[cons][j] = -fracX(a[i][j]);
                }
        }
        a[cons][countz+cons] = 1.0;
        break;
    }
    else{continue;}
  }
  for( i = 3 ; i < N; i++){
    basic[i] = i;
  }
}
float fracX(float x){
    float i,result;
    if(x < 0.0){
        i = ceil(x);
    }
    else{
        i = floor(x);
    }
    result = x - i;
    return result;
}
