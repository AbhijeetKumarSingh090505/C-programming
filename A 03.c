#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("enter b;");
    scanf("%d",&b);
    printf("values before swap\n a=%d,b=%d\n\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("values after swap\n a=%d,b=%d\n\n",a,b);
}
