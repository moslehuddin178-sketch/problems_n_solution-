// c program to check if a number is positive or negative or zero

#include<stdio.h>

void checkNum(int N){
    //check if the number is zero
    if(N == 0){
        printf("Zero\n");
        return;
    }
    
    // extarcting msb 
    int msb = N & (1 << (sizeof(int)* 8 -1));
    if(msb){
        printf("Negative\n");
    }
    else{
        printf("positive\n");
    }
}

int main(){
    int N = 10;
    checkNum(N);
    return 0;
}