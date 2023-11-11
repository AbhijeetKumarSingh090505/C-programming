#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the values a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("the values of discriminant is %d\n",d);
}