#include<stdio.h>
int main(){
    int x=1,y=10;
    while(x<y)
    {
        x++;
        y--;
    }
    printf("%d %d",x,y);
    return 0;
}