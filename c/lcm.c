#include<stdio.h>
int main(){
    int i,a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    i=a;
    else
    i=b;
    while(i<=a*b)
    { 
        if(i%a==0 && i%b==0)
        {
        printf("lcm=%d",i);
        break;
        }
        i++;
    }
    return 0;
}