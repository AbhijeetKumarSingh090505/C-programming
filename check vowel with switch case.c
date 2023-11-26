#include<stdio.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    switch(ch){
        case'a':
      printf("it is A vowel");
      break;
        case'e':
      printf("it is A vowel");
      break;
        case'i':
      printf("it is A vowel");
      break;
        case'o':
      printf("it is A vowel");
      break;
        case'u':
      printf("it is A vowel");
      break;
        default:
            printf("it is a consonant");
    }
}