#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+2*i-1;

    printf("sum is %d",s);
    return 0;
}