#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char *operation;
    int num1, num2, result;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);



    switch (*operation)
    {
    case '-':
        result = num1 - num2;
        printf("%d", result);
        break;

    case '+':
        result = num1 + num2;
        printf("%d", result);
        break;

    case '*':
        result = num1 * num2;
        printf("%d", result);
        break;

    case '/':
        result = num1 / num2;
        printf("%d", result);
        break;

    default:
        printf("the operator is not valid");
    }
    return 0;
}
