#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int p,q,r,s;
    printf("enter the character:");
    scanf("%c",&ch);
    p=isdigit(ch);
    q=isalpha(ch);
    r=ispunct(ch);
    s=isspace(ch);
    if(p==1){
        printf("the character %d is a digit",ch);
    }else if(q==1){
        printf("the character %d is a alphabet",ch);
    }else if(r==1){
        printf("the character %d is a punctuation",ch);
    }else if(s==1){
        printf("the character %d is a space",ch);
    }else{
        printf("wrong choice");
    }
}