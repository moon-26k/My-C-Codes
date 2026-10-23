#include<stdio.h>
int main(){
    int a,b,c;
    printf(" enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c && b>c)
    printf("%d>%d>%d",a,b,c);
    else if (a>b && a<c)
    printf("%d>%d>%d",c,a,b);
    else if (a>b && b<c)
    printf("%d>%d>%d",c,b,a);
    else if (a<b && b>c && a>c)
    printf("%d>%d>%d",b,a,c);
    else if (a>b && a>c && b<c)
    printf("%d>%d>%d",a,c,b);
    else 
    printf("%d>%d>%d",b,c,a);
    return 0;
}
   