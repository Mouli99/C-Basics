#include <stdio.h>

int main(){
    int num = 1234;
    int temp = num;
    int rem,rev = 0;
    
    while(num != 0){
        rem = num % 10;
        rev = rem + rev * 10;
        num = num / 10;
    }
    
    printf("%d is reverse of %d",rev,temp);
    
    return 0;
}
