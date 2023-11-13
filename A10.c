#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    float d=pow(a,2)+pow(b,2);
    if(d=(pow(c,2)==d)) {
        printf("it is a right angled triangle");
    }
    else{
        printf("it is not a right angled triangle");
    }
}