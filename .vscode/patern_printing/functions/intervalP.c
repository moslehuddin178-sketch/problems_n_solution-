//C program to demonstrate prime numbers between two intervals
//loop in a function
//#include<stdio.h>

/*/user defined function to check prime numbers

int checkPrimeNumber(int number){
    int i , f = 1;

    //condition for finding the prime numbers between the given intervals
    for (int i =2; i <= number /2; i++)
    {
        if (number % i == 0){
            f = 0;
            break;
        }
    }
    return f;
}

//driver code

int main(){

    int num1 = 0, j;
    int num2 = 0, f;
    printf("Enter two number those interval prime number you want to see : ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("prime prime number between %d and %d are :  ", num1, num2);

    for (j = num1; j < num2; ++j){
        //if flag is equal to one the it is a prime number
        //calling the function

        f = checkPrimeNumber(j);
        if (f == 1)
        {
            //printing the result
            printf("%d", j);
        }
    }


    return 0;
}*/

// C Program to demonstrate Prime Numbers
// Between Two Intervals Using for
// loop in a function
#include <stdio.h>

int isPrime(int number)
{
    int i;
  
    // condition for finding the
    // prime numbers between the
    // given intervals
    for (i = 2; i <= number / 2; i++) {

        // if the number is divisible 
        // by 1 and self then it
        // is prime number
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Driver code
int main()
{
    int num1 = 200, num2 = 1000;

    printf("The prime numbers between %d to %d are: ", 
            num1, num2);

    while (num1 <= num2) 
    {
        // calling the function
        if (isPrime(num1)) 
        {          
            // printing the result
            printf("%d, ", num1);
        }

        num1++;
    }

    return 0;
}