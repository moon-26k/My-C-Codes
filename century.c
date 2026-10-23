#include<stdio.h>
int main() {
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if (year%100==0)
    printf("this is a century year");
    else
    printf("this is not a century year");
    return 0;
}