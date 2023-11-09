#include<stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3,m,n;
    printf("Enter(x1,y1)\n");
    scanf("%f%f",&x1,&y1);
    printf("enter(x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("enter(x3,y3)\n");
    scanf("%f%f",&x3,&y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n){
        printf("all three points lies on same line");
    }
    else{
        printf("all three points do not lies on same line");
    }
}
