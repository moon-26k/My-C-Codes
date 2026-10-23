#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c)
    printf("deccreasing order");
    else if(a<b && b<c)
    printf("increasing order");
    else
    printf("invalid order");
}