#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

void Matrix(float u[],float theta,float U[][N]);

int main()
{
    int sum,term,i,N=3;
    float theta,u[N],U[N][N];
    sum=0;
    term=1;
    for (i=0;i<N;i++){
        scanf("%f",&u[N]);
        scanf("%f",&theta);
        sum=sum+term;
        term=pow(u[i],2);
        if (sum=1){
            theta=(360*theta)/180;
            Matrix(u,theta,U);
            printf("%f\t\n",&U[N][N]);
        }
    }
    return 0;
}

void Matrix(float u[],float theta,float U[][N]){
    int i,j;
    float angle;
angle=1-cos(theta);
for (i=0,i<N,i++){
    for (j=0,j<N,j++){
            U[i][j]=u[i]*u[j]*angle;
}
}
}
