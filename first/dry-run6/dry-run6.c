#include<stdio.h>
int main(){
    int x=128;
    for(;x;x>>=1)
    printf("%d ",x);
    return 0;
}