#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i*2-1;
        
    }
    printf("sum is %d",s);
    return 0;

}