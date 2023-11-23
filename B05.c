#include <stdio.h>
int main(){
    float r;
    printf("enter amount in rupees:");
    scanf("%f",&r);
    printf("in dollar=%f\n",r*0.012);
    printf("in dihrans=%f\n",r*0.044);
    printf("in ponds=%f\n",r*0.0096);
    printf("in taka=%f\n",r*1.32);
}

