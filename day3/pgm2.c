#include<stdio.h>
int main()
{
    int inputnumber,i=0;
    printf("enter a number to check if it is prime number");
    scanf("%d",&inputnumber);
    for(i=2;i<=inputnumber/2;i++){
        if(inputnumber%i == 0){
            printf("%d is not a prime number\n",inputnumber);
        }
        else{
            printf("%d is a prime number\n",inputnumber);
        }
        return 0;
    }
}