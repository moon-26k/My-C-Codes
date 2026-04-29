#include<stdio.h>
int main(){
    int i=1,fact=1,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        if(i%2==0)
        printf("%d is even factorial\n",i);
        else
        printf("%d is odd factorial\n",i);
        i++;
    }
    return 0;
}