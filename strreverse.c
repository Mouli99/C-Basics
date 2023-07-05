#include <stdio.h>

int main()
{
    char str[100] = "Nuvvulas";
    int i=0,j=0;
    char temp;
    while(str[i] != '\0'){
        i++;
    }
    printf("%d",i);
    
    for(j =0 ; j< i/2;j++){
        temp = str[j];
        str[j] = str[i-1-j];
        str[i-1-j] = temp;
    }
    
    printf("%s",str);

    return 0;
}
