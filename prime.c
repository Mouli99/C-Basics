#include <stdio.h>

int main()
{
    int num = 9;
    int count = 0;
    int i,j=0;
    
    for(j=1;j<=10000;j++){
        count=0;
    for(i=1;i<=j;i++){
        if(j % i == 0){
            count++;
        }
    } 
    if(count==2){
        printf("%d ",j);    
    }
    }

    return 0;
}
