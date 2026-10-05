#include<stdio.h>

/*unsigned int factorial(unsigned int N){
    int fact = 1, i;

    //loop from 1 to N to get the factorial
    for (i = 1; i <= N; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int N = 5;
    int fact = factorial(N);
    printf("factorial of %d is %d", N, fact);
    return 0;
}*/

unsigned int factorial(unsigned int n){
    //base case:
    if (n == 1){
        return 1;
    }
    // multiplying the current N with the previous product 
    // of Ns
    return n * factorial(n -1);

}

int main(){
    int num = 4;
    printf("factorial of %d is %d", num,factorial(num));
    return 0;
}