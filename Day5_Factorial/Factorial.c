#include <stdio.h>

int main(){
    int num,fac =1 ;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else{
        for(int i = 1; i<= num; i++)
            fac = fac * i;
        printf("factorial of %d = %d\n",num,fac);
    }
}