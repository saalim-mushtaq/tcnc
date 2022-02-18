#include<stdio.h>
int main(){
    int cand;
    printf("enter your age");
    scanf("%d",&cand);
    if(cand>=18){
        printf("you are eligible for license");
    }
    else{
        printf("you are not eligible for license");

    }
    return 0;

}