#include<stdio.h>
int main(){
    int i,j,lines;
    printf("enter number of lines you want to print");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=2*lines-1;j++){
            if(j>=lines+1-i&&j<=lines+i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}