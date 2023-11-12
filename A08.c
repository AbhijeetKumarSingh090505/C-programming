#include<stdio.h>
int main() {
    float c, f;
    printf("enter Celsius:\n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit:%f\n", f);
}