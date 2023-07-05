#include<stdio.h>
int main(){
    int a[10] = {1,2,2,3,3,3,4,4,4,4};
    
    int i,j,k;
    int size = 10;
    for(i=0; i < size; i++){
        for(j=i+1;j<size;j++){
            if(a[i] == a[j]){
                for(k=j;k<size;k++){
                    a[k] = a[k+1];
                }
                size--;
                j--;
            }
            
        }
    }
    
    
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}
