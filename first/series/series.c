#include<stdio.h>
int main(){
    int i,s=0,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
        printf("%d ",s);
    }
    return 0;
}