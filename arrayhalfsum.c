#include<stdio.h>
int main(){
    int arr[9]={3,45,34,12,43,345,5,6};
    int sum1=0,sum2=0;
    for(int i=0;i<=8;i++)
    {
        if(arr[i]<5)
        { sum1+=arr[i];}
        else
        {sum2+=arr[i];}
    }
    printf("%d and %d",sum1,sum2);
}