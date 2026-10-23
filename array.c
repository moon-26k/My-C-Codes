#include<stdio.h>
int main(){
    int arr[10]={3,45,34,12,43,345,5,6,7};
    int even=0,odd=0;
    for(int i=0; i<=9;i++)
     { 
        if(arr[i]%2==0)
          even++;
        else
          odd++;
    }
    printf("%d\n%d\n",even,odd);
    return 0;
}
