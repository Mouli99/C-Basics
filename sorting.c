#include<stdio.h>
int main(){
    int a[10] = {1,2,2,3,3,3,4,4,4,4};
    
    int size=10;
    int i,j=0;
    int temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            
            if(a[i] < a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            
        }
    }
    
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}
