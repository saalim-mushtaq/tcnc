#include<stdio.h>
int main(){
    float n1;
    float n2;
    char op;
    float result;

    printf("enter first number");
    scanf("%f",&n1);

    printf("enter the operator");
    scanf(" %c",&op);

     printf("enter the second number");
    scanf("%f",&n2);

    
    switch(op)
    {
        case '-':
        result = n1-n2;
        printf("%f",result);
        break;


         case '+':
        result = n1+n2;
        printf("%f",result);
        break;


         case '*':
        result = n1*n2;
        printf("%f",result);
        break;

         case '/':
        result = n1/n2;
        printf("%f",result);
        break;

        default:
        printf("the operator is not valid");

    }
    return 0;


}