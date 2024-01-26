
#include "NumClass.h"

int powerOf(int num1, int num2){
    int ans = 1;
    while(num2>0) {
        ans*=num1;
        num2-=1;
    }
    return ans;
}

int countDigits(int num){
    if(num<10) {return 1;}

    return 1 + countDigits((num/10)-((num%10)/10));
}

int calculateSum(int num, int digitsNum){
    if(num==0) {return 0;}

    int digit = num%10;

    return powerOf(digit, digitsNum)+calculateSum((num/10)-((num%10)/10), digitsNum);
}

int isArmstrong(int num) {
    
    if(num<0) {return 0;}
    if(num<10) {return 1;}

    int n = countDigits(num);

    int sum = calculateSum(num, n);

    if(num==sum) {return 1;}
    return 0;

}
int isPalindromeHelp(int original, int reversed) {
    
    if(original==0) {return reversed;}

    int last = original%10;

    reversed = reversed*10 + last;

    return isPalindromeHelp((original/10)-((original%10)/10), reversed);
}

int isPalindrome(int num) {
    
    if (num<0) {return 0;}

    int reversed = isPalindromeHelp(num, 0);

    if (reversed==num) {return 1;}
    return 0;
       
}
