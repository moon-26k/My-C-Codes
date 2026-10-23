#include<stdio.h>
int main(){
    float unit,tp,as,fp;
    printf("Enter units:");
    scanf("%f",&unit);
    if(unit<=50)
    {
        tp=0.50*unit;
        as=(tp/100)*20;
        fp=tp+as;
        printf("Rs.%f with surcharge Rs.%f",tp,fp);
    }
    else if(unit<=200)
    {
        tp=0.75*unit;
        as=(tp/100)*20;
        fp=tp+as;
        printf("Rs.%f with surcharge Rs.%f",tp,fp);
    }
    else if(unit<=250)
    {
        tp=1.20*unit;
        as=(tp/100)*20;
        fp=tp+as;
        printf("Rs.%f with surcharge Rs.%f",tp,fp);
    }
    else
    {
        tp=1.50*unit;
        as=(tp/100)*20;
        fp=tp+as;
        printf("Rs.%f with surcharge Rs.%f",tp,fp);
    }
    return 0;
}