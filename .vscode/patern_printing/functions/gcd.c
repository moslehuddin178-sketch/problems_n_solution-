#include<stdio.h>
#include<math.h>

//c program to find GCD of two numbers


//function to return gcd of a and b

int gcd(int a, int b)
{
    //find minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0){
        //check if both a and b are divisible by result
        if (a % result == 0 && b % result == 0){
            break;
        }
        result --;
    }
    //retrun gcd of a and b
    return result;
}

//driver program to test above function 
int main ()
{

    int a = 98, b = 56;
    printf("gcd of %d and %d is %d", a ,b, gcd(a,b));
    return 0;
}