// c program to find the sum of n
//natural numbers using recursion

#include<stdio.h>

//return the sum of first natural numbers
int recSum(int n){
    //base condition 
    if (n <= 1)
        return n;
    //recursive call
    return n + recSum(n -1);
}

//driver code 
int main(){
    int n = 100;
    printf("sum =%d",recSum(n));
     

    return 0;
}