#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float LegendrePolynomial(int n, float x)

int main()
{
     float x;
    int n;
    for (n=2;n<=10;n+=2){
        for (x=1;x<=2;x+=0.2){
            printf ("%f",LegendrePolynomia(int n,float x));
        }
    }
}

float LegendrePolynomial(int n, float x){
if (n<0)
    return 0.0;
    else if (n==1)
        return 1.0;
    else
        return ((2*n-1)/n)*x*LegendrePolynomial(n-1,x)-((n-1)/n)*LegendrePolynomial(n-2,x);
}
