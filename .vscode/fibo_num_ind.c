// c program to find the sum of even indices fibonacci numbers

#include<stdio.h>

int calculateEvenSum(int n){
    // return 0 if n is equals or less than to 0
    if (n <= 0)
       return 0;

    int fibo[ 2 * n + 1];
    fibo[0] = 0, fibo[1] = 1;

    //initialise the result 
    int sum = 0;

    //adding the remaining terms
    for (int i = 2; i <= 2 * n; i++ ){
        fibo[i] = fibo[ i - 1] + fibo[ i - 2];

        //for even indices
        if( i % 2 == 0)
          sum += fibo[i];

        
    }
    //return alternating sum
        return sum;
}

//driver code 
int main(){
    //get n
     int n = 5;

    // calculateEvenSum(n) function to computed and return
    //the sum of even-indices fibonacci numbers.
    int sum = calculateEvenSum(n);

    //display result 
    printf("Even indexed fibonacci sum upto %d terms = %d", n , sum);

    return 0;
}