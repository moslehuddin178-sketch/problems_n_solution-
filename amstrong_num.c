/*#include<math.h>
#include<stdio.h>
#include<stdbool.h>

bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;

    //Get the number of digits
    //adding 1 to componsate for the loss of fraction 
    //of the value returned by log10 due to convension
    // into integer

    int k = log10(temp) + 1;

    //calculate the sum of digits raised to the power of number digits

    while (temp > 0){
        int digit = temp % 10;
        sum += pow(digit, k);
        temp /= 10 ;

    }
    // return whether the sum is equal to the original number or not
    return (sum == N);
}

int main(){
    int N = 153;
    //. check if the number is a armstrong Number
    if(isArmstrong(N)){
        printf("yes, %d is an Armstrong Number \n", N);
    }
    else{
        printf("no, %d is not an Armstrong Number \n", N);
    }
    return 0;
}*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//recursive function to calculate the sum of digits raised
// to the power of num_digits
int armstrongSum(int N, int K){
    if(N ==0){
        return 0;
    }
    int digit = N % 10;
    return pow(digit, K) + armstrongSum( N / 10, K);
}

// function to check if the number is an Armstrong number
bool isArmstrong(int N){

    // finding the number of digits
    int K = log10(N) + 1;

    //calculationg the sum 
    int Sum = armstrongSum(N, K);

    // returning whether the sum is equal to the original
    // number or not
    return (Sum == N);
}

int main(){
    int N = 500;

    // check if the number is an Armstrong number

    if(isArmstrong(N)){
        printf("yes, %d is an Armstrong Number \n", N);
    }
    else{
        printf("no, %d is not an Armstrong Number \n", N);
    }

    return 0;
}