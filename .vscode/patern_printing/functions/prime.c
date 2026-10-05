// c program to check prime number
// Division approch

#include<stdio.h>
int isPrime(int N) {
    //check divisibility from 2 to N-1
    for (int i = 2; i < N; i++){
        //if N is divisible by i, it is not a prime number
        if(N % i == 0){
            return 0;
        }
    }
    //if no divisors were found, N is a prime number
    return 1;
}

int main (){
    int N = 0;
    printf("Enter a number what you want to check prime or not : ");
    scanf("%d", &N);
    printf("Is %d prime?\n", N);
    //check if the number is prime
    if(isPrime(N)){
        printf("yes \n");
    }
    else{
        printf("No \n");
    }
    return 0;
}