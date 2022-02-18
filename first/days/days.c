#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);

    switch(marks)
    {
        case 91 ... 100:
        printf("A grade");
        break;
        case 81 ... 90:
        printf("B grade");
        break;
        case 71 ... 80:
        printf("C grade");
        break;
        case 61 ... 70:
        printf("D grade");
        break;
        case 51 ... 60:
        printf("E grade");
        break;
        case 0 ... 50:
        printf("Fail");
        break;
        default:
        printf("error");
        
    }
    return 0;
}