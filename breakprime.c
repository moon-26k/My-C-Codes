#include<stdio.h>
int main(){
    int i=2,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        printf("not prime");
        break;
        i++;
    }
    if(i==n)
    printf("prime");
    
    return 0;
}