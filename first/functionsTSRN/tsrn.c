#include<stdio.h>
void sum(int a,int b){
    int c;
    c=a+b;
    printf("sum is %d",c);
}

    main()
    {
        int x,y;
        printf("enter two numbers");
        scanf("%d%d",&x,&y);
        sum(x,y);

    }

