#include<stdio.h>
int main(){
    float ci,p,r,t;
    printf("enter side p:");
    scanf("%f",&p);
    printf("enter side r:");
    scanf("%f",&r);
    printf("enter side t:");
    scanf("%f",&t);
    ci=(1+r/100);
    printf("ci=%f",pow(ci,t)*p);
}
