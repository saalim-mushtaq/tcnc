#include<stdio.h>
int main(){
    int i,N;
    printf("enter the value of N");
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        printf(" %d",2*i+1);
    }
    return 0;
}