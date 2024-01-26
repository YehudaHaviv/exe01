
#include "NumClass.h"

int isPrime(int num) {

    if(num<1) {return 0;}
    if(num==1) {return 1;}

    int temp = num-1;

    while (temp>1)
    {
        if(num%temp==0) {return 0;}
        temp-=1;
    }
    
    return 1;
}

int isStrong(int num) {

    if(num<0) {return 0;}

    int sum = 0;
    int ans = num;

    while (num>0)
    {
        int temp = num%10;
        int add = 1;
        while (temp>0)
        {   
            add = add*temp;
            temp-=1;
        }
        
        sum = sum+add;
        num = (num/10)-((num%10)/10);
    }
    
    if(sum==ans) {return 1;}
    else {return 0;}
}