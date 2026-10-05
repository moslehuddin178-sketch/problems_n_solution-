// c program for the above approach
#include<stdio.h>
//native iterative solution to calculate pow(x,n)
long power(int x, unsigned n){
    //initialize result to 1
    long long pow = 1;

    //multiply x for n times
    for (int i = 0; i < n; i++){
        pow = pow * x;
    }
    return pow;
}
// driver code

int main (void){
    int x = 5000;
    unsigned n = 2;

    //function call 
    int result = power(x,n);
    printf("%d", result);
    
    return 0;
}