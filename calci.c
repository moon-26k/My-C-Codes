#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("enter operator +,-,*,/,%:/n ");
    scanf(" %c",&ch);
    if(ch=='+')
    {
      c=a+b;
      printf("%d",c);
    }
    else if(ch=='-')
    {
        c=a-b;
      printf("%d",c);
    }
    else if(ch=='*')
    {
         c=a*b;
      printf("%d",c);
    }
    else if(ch=='/')
    {
        c=a/b;
      printf("%d",c);
    }
    else if(ch=='%')
    {
        c=a%b;
      printf("%d",c);
    }
    else
    printf("invalid operator");
    return 0;
}    