#include<stdio.h>
int main(){
    char ch;
    printf("enter any charecter");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("charecter is vowel");
    }
    else{
        printf("charecter is consonent");
    }
    return 0;
}