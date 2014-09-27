#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>

#define INFINITY -999   //Negative higher number constant
#define M 100
#define N 100
#define MIN 0.0000000000000000001
#define FLOATINFINITY 1000.00

using namespace std;

int NV;  /* Number of variables */
int con;      /* Number of constraints for the problem */
int response;        /* For Max or Min*/
int basic[N];        /* Stores the basic variable */
float c[M];          /* Stores co-efficient of the objective function Max(z) */
float solutionSimplex[M];  /* Contains solution of simplex table */
float solutionDSimplex[M]; /* Contains solution of dual simplex table */
float solutionGomoryCut[M]; /* Final Solution of gomory cut problem */
int checkSolution(int [], float [], int); /* Checks if Solutions for required basic variables are integers */
float fracX(float);                       /* Calculates Fractional part of number */
float fracPart[M];                        /* Stores fractional part of basic variables in array */

void dualTableForm(float a[N][M],float [],float [],int,int,int []);

/*** Simplex Class ***/

class simplexProblem{

public:
  void solve(float [][M],float [],float []);               /* Solves the simplex problem */
  void printFinalSolution(float [][M],float [],float []);  /* Prints Final Solution of Simplex Table */
private:
  float x[M];                                                /* Stores the value of the variables */
  int leavingcol;
  float temp[M];                                             /* Stores the values of Zj-Cj*/
  int flag = 0;                                              /* Terminating variable */
  int bminpos;                                               /* Stores the minimum valued position of {Zj-Cj} i.e. coming in variable */
  int gooutcol;                                              /* Stores the column number which goes out */
  float minratio[M];                                         /* Stores the value of the ratio Zj-Cj/a[i][j] */
  int minratiominpos;                                        /* Stores the minimum valued position of b[i]/a[i][j] i.e. going out variable */
  int incomingcol;                                           /* Stores the incoming column number */
  float z, key;
  void calctemp(float *,float [][M],float [],int []);        /* Calculates Zj-Cj */
  void modify(float a[N][M], float b[N]);
  void minimum(float *arr,int *arrminpos,int n);             /* Calculates the minimum valued position among the array arr having n elements. */
  void minratioval(float *arr,int *arrminpos,int n);         /* Calculates the minimum valued position among the array arr having n elements. */
  void printSolution(float [][M],float [],float []);         /* Calculates the solution Matrix */
  void display (float c[],float b[],float a[][M],int basic[], float temp[N]);  /* Displays solution in table form*/
  void displayframe(float c[M], float temp[N]);                                /* Displays the frame of the table */
};


void simplexProblem::modify(float a[N][M], float b[N]){
int r,s;
    for(r = 0; r < con; r++){
        if(b[r] <= MIN){
            b[r] = 0.0;
        }
    }
    for(r = 0; r < con; r++){
        for(s = 0; s < con+NV; s++){
            if(a[r][s] <= MIN){
            a[r][s] = 0.0;
        }
        }
    }
}

void simplexProblem::display (float c[N],float b[N],float a[N][M],int basic[N], float temp[N]){
    int i,j;
    displayframe(c,temp);
    for(i=0;i<con;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[basic[i]],basic[i]+1,b[i]);
        for(j=0;j<con+NV;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}

void simplexProblem::displayframe(float c[M], float temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<con+NV;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<con+NV;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<con+NV;i++)
        printf("a[%d]\t",i+1);
    printf("\n");
}

void simplexProblem::printFinalSolution(float [][M],float [],float []){
    int i;
    printf("\n----------------------FINAL SOLUTION OF SIMPLEX PROBLEM-------------------------\n\n");
    for(i = 0; i < NV; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionSimplex[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionSimplex[i];
    }
    if(response == 1){
        printf("Maximum Value = %2.2f\n",f);
    }
    if(response == 2){
        printf("Minimum Value = %2.2f\n",f);
    }
    printf("\n--------------------------------------------------------------------------------\n");
}

void simplexProblem::printSolution(float a[N][M],float b[N],float c[M]){
    int i;
    for(i = 0; i < con + NV; i++){
        solutionSimplex[i] = 0.0;
    }
    for(i = 0; i < con; i++){
            solutionSimplex[basic[i]] = b[i];
    }
}

void simplexProblem::calctemp(float *temp,float a[N][M],float c[M],int basic[N]){
    int i,j;
    for(i = 0 ; i < con + NV ; i++){
        temp[i]=0;
        for(j = 0 ; j < con; j++){
            temp[i] = temp[i] + c[basic[j]]*a[j][i];
        }
    temp[i] = temp[i] - c[i];
    }
}

void simplexProblem::minimum(float *arr,int *arrminpos, int n){
    *arrminpos = -1;
    float arrmin = FLOATINFINITY;
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

void simplexProblem::solve(float a[N][M], float b[N], float c[M]){
    int k = 0,i,j;
    calctemp(temp, a, c, basic);

    /*** Calculation for actual table ***/
    do{
        k++;
        z = 0;
        display (c,b,a,basic,temp);
        printf("\n\n");
        getchar();
        printf("-------------------------------------STAGE %d------------------------------------\n",k);

        /*** Printing Zj - Cj Matrix ***/

        printf("\nZj - cj Matrix\n");
        for(i = 0; i < con + NV ; i++){
            printf("%2.2f ",temp[i]);
        }

        /*** End of Printing Zj - Cj Matrix ***/

        /*** Some Printing ***/
        printf("\n");
        for(i = 0; i < NV; i++){
            if(i == 0)
                printf("x%d >= 0 ",i+1);
            else
                printf(", x%d >= 0 ",i+1);
        }

        /*** End of Some Printing ***/

        printf("\nBasic Matrix\n");
        for(i = 0; i < con + NV ; i++){
            printf("%d ",basic[i]+1);
        }

        /*** Terminating condition ***/
        for(i = 0; i < con + NV; i++){
            flag = 1;
            if(temp[i] < 0){
                flag = 0;
                break;
            }
        }

        /*** End of terminating Condition ***/

        /*** Determining the incoming variable ***/

        minimum(temp, &bminpos, (con + NV));
        incomingcol = bminpos;
        /*** End of determining the incoming variable ***/

        /*** Determining the outgoing variable ***/

        for(i = 0; i < M; i++){
            minratio[i] = 0.0;
        }

        for(i = 0; i < con; i++){
            if(a[i][incomingcol] <= 0.0){
                minratio[i] = FLOATINFINITY;
            }
            else{
                minratio[i] = b[i]/a[i][incomingcol];
            }
        }

        printf("\nMin Ratio Matrix\n");
        for(i = 0; i < con; i++){
            printf("%2.2f ",minratio[i]);
        }
        minratioval(minratio, &minratiominpos, con);
        gooutcol = minratiominpos;

        /*** End of determining the outgoing variable ***/

        for(i = 0; i < con + NV; i++){
            x[i] = 0;
        }
        printf("\n");
        for(i = 0; i < con; i++){
            x[basic[i]] = b[i];
            printf("x[%d] = %0.3g\n",basic[i]+1,b[i]);
        }

        for(i = 0; i < con; i++){
            z = z + c[i]*x[i];
        }
        if(response == 1){
            printf("Max(z) = %2.2f",z);
        }
        if(response == 2){
            printf("Min(z) = %2.2f",z);
        }
        printf("\nBasic Matrix\n");
        for(i = 0; i < con + NV ; i++){
            printf("%d ",basic[i]+1);
        }
        /*** Changing the basic and non-basic variable ***/
        leavingcol = basic[gooutcol]+1;
        basic[gooutcol]=incomingcol;
        printf("\nComing in variable = X%d\t",incomingcol+1);
        printf("Going out variable = X%d, gooutcol = %d\n",leavingcol, gooutcol);

        /*** Performing the operations to bring similar expressions in
        in-coming variable as out-going variable by row operations ***/

        key = a[gooutcol][incomingcol];
        b[gooutcol] = b[gooutcol]/key;
        for(i = 0; i < con + NV; i++)
            a[gooutcol][i] = a[gooutcol][i]/key;
        for(i = 0; i < con; i++){
            if(gooutcol == i){
            continue;
            }
            key = a[i][incomingcol];
            for(j = 0 ; j < (con + NV) ; j++){
                a[i][j]=a[i][j]-a[gooutcol][j]*key;
            }
            b[i] = b[i] - b[gooutcol]*key;
        }
        calctemp(temp, a, c, basic);
        printf("Temp Matrix(Zj - Cj for next iteration):\n");
        for(i = 0; i < con + NV; i++){
            printf("%2.2f ",temp[i]);
        }
        printf("\n");
        for(i = 0; i < con + NV; i++){
            flag = 1;
            if(temp[i] < 0){
                flag = 0;
                break;
            }
        }
        printf("\n--------------------------------------------------------------------------------\n");
        getchar();
    }while(flag == 0);
    getchar();
    display (c,b,a,basic,temp);
    printSolution(a,b,c);

    printFinalSolution(a,b,c);
}






class dualSimplexProblem{

public:
    void solve(float [][M],float [],float [],int,int);              /* Solves Dual Simplex Problem */
    void printFinalSolution(float [][M],float [],float [],int,int); /* Prints Final Solution of dual Simplex Table */
private:
    float x[M];                                                     /* Stores the value of the variables */
    float temp[M];                                                  /* Stores the values of Zj-Cj*/
    int flag = 0;                                                   /* Terminating variable */
    int bminpos;                                                    /* Stores the minimum valued position of {Zj-Cj} i.e. coming in variable */
    int gooutcol;                                                   /* Stores the column number which goes out */
    float maxratio[M];                                              /* Stores the value of the ratio Zj-Cj/a[i][j] */
    int maxratiomaxpos;                                             /* Stores the minimum valued position of b[i]/a[i][j] i.e. going out variable */
    int incomingcol;
    float z, key;
    void calctemp(float *,float [][M],float [],int [],int,int);     /* Calculates Zj-Cj */
    void minimum(float *arr,int *arrminpos,int n);                  /* Calculates the minimum valued position among the array arr having n elements. */
    void maximum(float *arr,int *arrminpos,int n);                  /* Calculates the minimum valued position among the array arr having n elements. */
    void printSolution(float [][M],float [],float [],int,int);
    void display (float c[],float b[],float a[][M],int basic[], float temp[N]);      /* Display the table */
    void displayframe(float c[M], float temp[N]);                                    /* Displays the frame of the table */
    void modify(float a[N][M], float b[N],int cons, int countz);
};

void dualSimplexProblem::modify(float a[N][M], float b[N], int cons, int countz){
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

void dualSimplexProblem::display(float c[N],float b[N],float a[N][M],int basic[N], float temp[N]){
    int i,j;
    displayframe(c,temp);
    for(i=0;i<con;i++){
        printf("\n%0.3g\tX%d\t%0.3g\t",c[basic[i]],basic[i]+1,b[i]);
        for(j=0;j<con+NV;j++)
            printf("%0.3g\t",a[i][j]);
        printf("\n");
    }
}

void dualSimplexProblem::displayframe(float c[M], float temp[N]){
    int i;
    printf("\t\tZj-Cj\t");
    for(i=0;i<con+NV;i++)
        printf("%0.2g\t",temp[i]);
    printf("\n\n");
    printf("\t\tc[j]\t");
    for(i=0;i<con+NV;i++)
        printf("%0.2g\t",c[i]);
    printf("\n");
    printf("\nc[B]\tB\tb\t");
    for(i=0;i<con+NV;i++)
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
    arrmax = INFINITY;
    *arrmaxpos = 0;
    for(i = 0; i < n; i++){
        if((arr[i] > arrmax) && (arr[i] < 0.0)){
            arrmax = arr[i];
            *arrmaxpos = i;
        }
    }
}

void dualSimplexProblem::solve(float a[N][M], float b[N], float c[M], int cons, int countz){

    /*** Calculation for actual table ***/
    int k = 0,i,j;
    float solution[M];
    do{
        k++;
        /*** Terminating condition ***/
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
    getchar();
    printf("------------------------------------STAGE %d-------------------------------------\n",k);
    printf("\nBasic Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%d ",basic[i]+1);
    }
    printf("\nTemp Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%.2f ",temp[i]);
    }

    /*** Printing the zj - cj Matrix ***/
    calctemp(temp, a, c, basic, con, NV);
    printf("\nZj - cj Matrix\n");
    for(i = 0; i < cons + countz ; i++){
        printf("%.2f ",temp[i]);
    }

    /*** Determining the outgoing variable ***/

    minimum(b,&bminpos,cons);
    gooutcol = basic[bminpos];

    /*** Determining the incoming column ***/
    for(i = 0; i < M; i++){
      maxratio[i] = INFINITY;
    }

    for(i = 0; i < cons + countz; i++){
      if(a[bminpos][i] == 0){
        maxratio[i] = FLOATINFINITY;
        continue;
      }
      if(a[bminpos][i] > 0){
        maxratio[i] = FLOATINFINITY;
        continue;
      }
      maxratio[i] = temp[i]/a[bminpos][i];
    }

    maximum(maxratio,&maxratiomaxpos,cons + countz);
    incomingcol = maxratiomaxpos;
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

    if(response == 1){
        printf("Max(z) = %2.2f",z);
    }
    if(response == 2){
        printf("Min(z) = %2.2f",z);
    }
    printf("\nComing in variable = X%d\t",incomingcol+1);
    printf("Going out variable = X%d\n",gooutcol+1);

   /*** Changing the basic and non-basic variable ***/

    basic[bminpos]=incomingcol;

    /*** Performing the operations to bring similar expressions in
    in-coming variable as out-going variable by row operations ***/

    key = a[bminpos][incomingcol];
    b[bminpos] = b[bminpos]/key;
    for(i = 0; i < cons + countz; i++)
      a[bminpos][i] = a[bminpos][i]/key;
    for(i = 0; i < con; i++){
      if(bminpos == i){
        continue;
      }
      key = a[i][incomingcol];
      for(j = 0 ; j < (cons + countz) ; j++){
        a[i][j]=a[i][j]-a[bminpos][j]*key;
      }
      b[i] = b[i] - b[bminpos]*key;
    }

    getchar();

    for(i = 0; i < cons; i++){
        flag = 1;
        if(b[i] <= 0){
            flag = 0;
            break;
        }
    }
    printf("\n------------------------------------------------------------------------------\n");
    printSolution(a,b,c,con,NV);

    }while(flag==0);
    printf("\n");
    display(c,b,a,basic,temp);
    printFinalSolution(a,b,c,con,NV);
}

void dualSimplexProblem::printFinalSolution(float [][M],float [],float [], int cons, int countz){
    int i;
    printf("\n-----------------FINAL SOLUTION OF DUAL SIMPLEX PROBLEM-------------------------\n\n");
    for(i = 0; i < countz; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionDSimplex[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionDSimplex[i];
    }
    if(response == 1){
        printf("Maximum Value = %2.2f\n",f);
    }
    if(response == 2){
        printf("Minimum Value = %2.2f\n",f);
    }
    printf("\n--------------------------------------------------------------------------------\n");
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


int main(){

    float a[N][M];    /* Stores the co-efficent of the cons */
    float b[N];      /* Stores the values on RHS of cons */
    int i,j;
    printf("SOLVING OPTIMIZATION PROBLEM USING GOMORY CUT METHOD TO OBTAIN INTEGER SOLUTIONS\n\n");
    for(i = 0; i < M ; i++){
        c[i] = fracPart[i] = 0.0;
    }
    for(i = 0; i < N ; i++){
        for(j = 0 ; j < M ; j++){
            a[i][j] = 0.0;
        }
    }

    printf("\nEnter number of terms in objective function\n"); //
    scanf("%d",&NV);

    /*** End of taking number of terms of objective function ***/

    /*** Example: z = 3*x1 + 2*x2 - 5*x3 Enter the values : c[0]=3 , c[1]=2 , c[2] = -5 ***/

    printf("\nEnter the co-efficients of the objective function\n"); //
    for(i = 0; i < NV ; i++){
        scanf("%f",&c[i]) ;
    }

    /*** End of entering co-efficients of Objective functions ***/

    /*** Max or Min ***/

    printf("\nDo you want to Maximize or Minimize?(1. Maximize 2. Minimize):\n");
    scanf("%d",&response);
    if(response == 1){
        for(i = 0; i < NV;i++){
            c[i] = c[i];
        }
    }
    if(response == 2){
        for(i = 0; i < NV;i++){
            c[i] = c[i]*(-1);
        }
    }
    /*** End of Max or Min ***/

    /*** Printing the Objective Function ***/

    printf("\nYou have entered the function as follows:-\n");
    if(response == 1){
        printf("\nMax z = ");
    }
    if(response == 2){
        printf("\nMin z = ");
    }
    for(i = 0; i < NV ; i++){
        if(i == 0)
            printf("%g*x%d",c[i],i+1);
        else
            printf(" + %g*x%d",c[i],i+1);
    }

    /*** End of Printing Objective Function ***/

    /*** Entering the cons assuming all xi's are greater than or equal to 0 ***/

    printf("\n\nEnter number of cons\n");
    scanf("%d",&con);

    printf("\nEnter the co-efficient of cons\n");
    for(i = 0 ; i < con ; i++){
        for(j = 0 ; j < NV ; j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i = 0 ; i < con ; i++){
        a[i][j++] = 1;
    }

    printf("\nEnter values of bi's\n");
    for(i = 0 ; i < con ; i++){
        scanf("%f",&b[i]);
    }
    for(i = 0 ; i < NV + con ; i++){
        basic[i] = i + NV;
    }

    /*** End of entering the cons assuming all xi's are greater than or equal to 0 ***/

    /*** Printing the Problem ***/
    printf("\n\n--------------------------------------------------------------------------------\n\n");
    if(response == 1){
        printf("\nThe Problem is :\nMax z = ");
    }
    if(response == 2){
        printf("\nThe Problem is :\nMin z = ");
    }
    for(i = 0; i < NV ; i++){
        if(i == 0)
            printf("%g*x%d",c[i],i+1);
        else
            printf(" + %g*x%d",c[i],i+1);
    }
    printf("\n");
    for(i = 0 ; i < con ; i++){
        for(j = 0 ; j < NV ; j++){
            if(j == 0)
                printf(" %g*x%d ",a[i][j],j+1);
            else
                printf(" + %g*x%d ",a[i][j],j+1);
        }
        printf(" <= %g\n",b[i]);
    }
    for(i = 0; i < NV; i++){
        if(i == NV-1){
            printf("x%d >= 0\n",i+1);

        }
        else{
            printf("x%d >= 0, ",i+1);

        }
    }
    printf("\n\n--------------------------------------------------------------------------------\n\n");

    simplexProblem simple;
    simple.solve(a,b,c);

    dualSimplexProblem dsp;
    dualTableForm(a,b,fracPart,con,NV,basic);
    con++;
    for(i = 0; i < NV; i++){
        solutionGomoryCut[i] = solutionSimplex[i];
    }
    int status = 0;
    while(checkSolution(basic,fracPart,con) == 0){
        status = 1;
        dsp.solve(a,b,c,con,NV);
        dualTableForm(a,b,fracPart,con,NV,basic);
        con++;
    }
    if(status == 1){
        for(i = 0; i < NV; i++){
        solutionGomoryCut[i] = solutionDSimplex[i];
        }
    }
    getchar();
    printf("\n--------------------------------FINAL SOLUTION----------------------------------\n\n");
    for(i = 0; i < NV; i++){
        printf("x[%d] = %2.2f\n",i+1,solutionGomoryCut[i]);
    }
    float f = 0.0;
    for(i = 0; i < NV; i++){
        f = f + c[i]*solutionGomoryCut[i];
    }
    if(response == 1){
        printf("Maximum Value = %2.2f\n",f);
    }
    if(response == 2){
        printf("Minimum Value = %2.2f\n",f);
    }
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\nStatus = %d\n",status);
    getchar();
    return 0;
}


int checkSolution(int basic[N], float fracPart[], int con){
    int flag = 1,i;
    printf("\n");
    for(i = 0; i < con; i++){
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

