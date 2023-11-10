#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("values before swap\n a=%d,b=%d\n\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values after swap\n a=%d,b=%d\n\n",a,b);
}
