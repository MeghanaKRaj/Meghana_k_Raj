//find the positive and negative number
#include<stdio.h>
int main(){
    it x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0){
        printf("Entered number is positive,");
    }
    else{
        printf("Entered number is negative,");
    }
    return 0;
}