#include<stdio.h>
int main(){
    int km,tp;
    printf("enter km:");
    scanf("%d",&km);
    if(km<=10)
    {
        tp=km*11;
        printf("bil:%d",tp);
    }
    else if(km<=100)
    {
         tp=km*10;
        printf("bil:%d",tp); 
    }
    else
    {
        tp=km*9;
        printf("bil:%d",tp);
    }
    return 0;
}