#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter any number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;
}