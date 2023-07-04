#include <stdio.h>

int main(){
    
int num = 4037;
int count =0;
int num1 = num;
int num2 =1;
int sum =0;
int rem,i=0;

int temp = num;
while(num != 0){
    num = num /10;
    count++;
}

printf("%d",count);

while(num1 != 0){
    rem = num1 % 10;
    for(i=1;i<=count;i++){
        num2 = num2 * rem;
    }
    sum = sum + num2;
    num1 = num1 / 10;
    num2 = 1;
}


if(sum == temp){
    printf("ArmStrong is %d",sum);
}else{
    printf("Not Armstrong is %d",temp);
}

}
