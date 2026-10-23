#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter any two number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    i=b;
    else
    i=a;
    while(i>=1)
    {
        if(a%i==0 && b%i==0)
       {
         printf("hcf=%d",i);
         break;
       }
       i--;
    }
    return 0;
}   
