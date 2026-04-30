#include<stdio.h>
int main(){
int f=0,s=1,a,i=1,n;
printf("enter any number:");
scanf("%d",&n);
printf("%d\t%d",f,s);
while(i<=n-2)
{
    a=f+s;
    printf("\t%d",a);
    f=s;
    s=a;
    i++;
}
return 0;
}