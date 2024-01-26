
#include <stdio.h>
#include "NumClass.h"

int main() {
    
    int num1;
    int num2;

    //printf("please enter first number: ");
    scanf("%d", &num1);

    //printf("\nplease enter second number: ");
    scanf("%d", &num2);

    if(num1<0 || num2<0 || num1!=(int)num1 || num2!=(int)num2) {return 1;}
    
    int min = num1;
    int max = num2;
    if(num1>=num2)
    {
        min = num2;
        max = num1;  
    }

    int i = min;
    printf("The Armstrong numbers are:");
    while(i<=max)
    {
        if(isArmstrong(i)==1) {printf(" %d",i);}
        i++;
    }

    i = min;
    printf("\nThe Palindromes are:");
    while(i<=max)
    {
        if(isPalindrome(i)==1) {printf(" %d", i);}
        i++;
    }


    i = min;
    printf("\nThe Prime numbers are:");
    while(i<=max)
    {
        if(isPrime(i)==1) {printf(" %d", i);}
        i++;
    }

    
    i = min;
    printf("\nThe Strong numbers are:");
    while(i<=max)
    {
        if(isStrong(i)==1) {printf(" %d", i);}
        i++;
    }

     printf("\n");

    return 0;
}
