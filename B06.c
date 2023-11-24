#include<stdio.h>
#include<math.h>
int main(){float a,b,c,d,s,ar;
    printf("enter side a:");
    scanf("%f",&a);
    printf("enter side b:");
    scanf("%f",&b);
    printf("enter side c:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of the triangle:%f",ar);
}