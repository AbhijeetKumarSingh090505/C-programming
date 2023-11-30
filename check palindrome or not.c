#include <stdio.h>
int main(){
    int n,reversed=0,remainder,original1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original1=n;
    while(n!= 0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    if(original1==reversed) {
        printf("%d is a palindrome.", original1);
    }else {
        printf("%d is not a palindrome.", original1);
    }
}