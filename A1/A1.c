#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double manclaurin(int N,double x);

int main(){
    double x,z;
    int N;
    scanf ("%f",&x);
    scanf("%i",&N);
    z=manclaurin(N,x);
    printf ("x=",x,"\n f(x)=",z,"\npow(cos(x),2)=",pow(cos(x),2));
    return 0;
}

double manclaurin (int N,double x){
float term,sum;
int n;
for(n=1;n<=N;n++){
    term=term*((-1)*4*pow(x,2)/((2*n)*(2*n-1)));
    sum=sum+term;
}
sum=1+sum/2;
return sum;
}
//the result is always zero no matter what combination of numbers i put in
