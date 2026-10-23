#include<stdio.h>
int main(){
    int tp,damount,fp;
    printf("enter price: ");
    scanf("%d",&tp);
    if(tp>100)
    {
        damount=tp/100*10;
        fp=tp-damount;
        printf("final price:%d",fp);
    }
    else 
    printf("final price:%d",tp);
    return 0;
}