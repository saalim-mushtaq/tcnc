#include<stdio.h>
int main(){
    int i,pro=1,N;
    printf("enter value of N");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        pro=pro*i;}
        printf(" %d",pro);
    
    
    return 0;
}