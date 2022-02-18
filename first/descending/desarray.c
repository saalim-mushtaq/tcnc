#include<stdio.h>
int main(){
    int i,j,temp,num[5];

    printf("enter 5 numbers");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(num[i]<num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("numbers in desending order");
    for(i=0;i<5;i++){
        printf(" %d",num[i]);
    }
    return 0;
}
