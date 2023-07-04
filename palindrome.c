#include <stdio.h>

int main(){
    int num = 1234321;
    int temp = num;
    int rem,rev = 0;
    
    while(num != 0){
        rem = num % 10;
        rev = rem + rev * 10;
        num = num / 10;
    }
    
    if( rev == temp){
        printf("Palindrome is %d",rev);
    }
    else{
        printf("Not Palindrome is %d",temp);
    }
    
    
    return 0;
}
