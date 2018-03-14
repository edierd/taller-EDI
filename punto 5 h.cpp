#include <stdio.h>
#include <string.h>
 
#define MAX 10000
 
void genera_primos(int *criba)
{
    int i,j;
    for(i=2;i*i<=MAX;i++)
        if(!criba[i])
            for(j=i*i;j<MAX;j+=i)
                if(!criba[j]) criba[j]=i;
}
 
void fact(int *criba,int n)
{
    int i;
    for(i=n;criba[i];i=i/criba[n])
        printf("%d ",criba[i]);
    printf("%d\n",i);
}
 
int main()
{
    int criba[MAX+1];
    int n;
 
    memset(criba,0,sizeof(criba));
    genera_primos(criba);
 
    scanf("%d",&n);
    fact(criba,n);
 
    return 0;
}
