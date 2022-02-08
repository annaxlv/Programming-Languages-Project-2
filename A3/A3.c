#include <stdio.h>
#include <stdlib.h>

void Sentence(char a[],int n);

int main()
{
    int i,N=50;
     char a[N];
     i=0;
     a[i]=getchar();
     while (i<=N,a[i]!='\0'){
        i++;
        a[i]=getchar();
     }

       Sentence(a,i-1);
}

void Sentence(char a[],int n){
int i,v,c,d;
char t;
for (i=0;i<n;i++){
    t=tolower(a[i]);
    if (isalpha(t)){
        if ( t="a"||t="e"||t="i"||t="o"||t="u"||t="y" ){
        a[t]="-";
        v=v+1;
        }
        else
        a[t]=".";
        c=c+1;
        }
        else
        return t;
    }

    if (isdigit(t)){
        d=d+1;
    }
    printf("%d",v,c,d);
}
