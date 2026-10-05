#include<stdio.h>

int main(){
    int tempF = 5, tempC = 100;
    // swapping values of a and b
    
    tempC = tempF - tempC;
    tempF = tempF + tempC;
    
    printf("tempC = %d, tempF = %d\n", tempF, tempC);
    return 0;
}