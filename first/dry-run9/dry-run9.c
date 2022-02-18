#include<stdio.h>
int main(){
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=2*a-1;b++)
        printf("%d",b);
        printf("\n");
    }
}