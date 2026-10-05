// c program to demonstrate whether a number is neon number or not 
#include<stdio.h>

int Check_Neon_Number (int num){
    //Calculating the square of the number 
    int square = num * num;

    // copying the square in a variable to extract the digit
    int n = square;

    // declaring a variable to store the digits
    int digit;

    //initiating a variable to calculate the sum of digits
    int sum = 0;

    // to calculate the sum of digits
    while( n != 0){

        // extracting the digit
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    //checking the condition of a neon number 
    if (sum == num)
       return 1;
    else 
       return 0;
}

int main(){
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    //calling the function
    int ans = Check_Neon_Number(num);
    
    if (ans == 1)
       printf("true.\nthis is a neon number.");
    else
       printf("false.\n this is not a neon number.");

    return 0;
}