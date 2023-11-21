#include<stdio.h>
int main(){
    int i,fact=1,no;
    printf("enter a number");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        fact=fact*i;
    }
    printf("factorial of%dis%d,number,fact");
}