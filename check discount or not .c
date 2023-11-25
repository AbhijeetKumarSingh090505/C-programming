#include<stdio.h>
int main(){
    float amt,dis,bill;
    printf("enter amount");
    scanf("%f",&amt);
    printf("enter discount");
    scanf("%f",&dis);
    if(dis>=10&&dis<=50){
        bill=(amt*(dis/100))+(18/100);
        printf("bill=%f",bill);
    }else if(dis>=50&&dis<=100){
        bill=(amt*(dis/100))+(2/100);
        printf("bill=%f",bill);
    }else{
        printf("error");
    }
}