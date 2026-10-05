// c program to calculate Compound interest
#include<stdio.h>

//for using pow function we need to use #include<math.h> function
#include<math.h>

//driver code
int main(){
    //principal amount 
    double principal = 10000;

    // interest rate 
    double rate = 5;

    //time
    double time = 2;

    // calculating compound interest
    double amount = principal *((pow((1 + rate / 100), time)));

    double CI = amount - principal;

    printf(" Compound interest is : %.2lf", CI);

    return 0;

}