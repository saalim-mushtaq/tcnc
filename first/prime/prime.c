#include<stdio.h>
int main(){
    int a,i;
    printf("enter any number");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    if(a%i==0)
    break;

    if(i==a){
        printf("%d is a prime number",a);
    }
    else{
        printf("%d is not prime number",a);
    }
    return 0;
}