#include<stdio.h>
int main(){
    int i,result;
    printf("enter any number");
    scanf("%d",&i);
    while(i>0){
    result=i%10;
    printf("%d",result);
    i=i/10;}
    return 0;
}