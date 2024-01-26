
#include "NumClass.h"

int isArmstrong(int num) {

    int ans = num;
    int sum = 0;
    int n = 0;

    if(num<0) {return 0;}
    if(num==0) {return 1;}

    while (num>0)
    {
        n++;
        num = (num/10)-((num%10)/10);
    }

    num = ans;

    while(num>0) 
    {
        int temp = 1;
        int power = n;
        while(power>0)
        {
            temp*=(num%10);
            power-=1;
        }
        sum = sum+temp;
        num = (num/10)-((num%10)/10);
    }

    if(sum==ans) {return 1;}
    else {return 0;}

}

int isPalindrome(int num) {
    
    if(num<0) {return 0;}

    int original = num;
    int reversed = 0;

    while(num>0) 
    {
        int digit = num%10;
        reversed = reversed*10+digit;
        num/=10;
    }

    if(original==reversed) {return 1;}
    return 0;
}