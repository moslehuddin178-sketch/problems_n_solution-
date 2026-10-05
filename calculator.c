#include<stdio.h>
#include<math.h>

int main ()
{
    //calculator program

    char operator = '\0';
    double number1 = 0.0;
    double number2 = 0.0;
    double number3 = 0.0;
    double number4 = 0.0;
    double result = 0.0;

    printf("Enter the first number : ");
    scanf("%lf", &number1);

    printf("Enter the operator (+ - / *) : ");
    scanf(" %c", &operator); // clear \n from input buffer

    printf("Enter the second number : ");
    scanf("%lf", &number2);

    switch(operator){

        case '+' : 
           result = number1 + number2;
           break;

        case '-' : 
           result = number1 - number2;
           break;

        case '*' : 
           result = number1 * number2;
           break;

        case '/' : 
         if(number2 == 0){
            printf("You can not devide any real number with zero! ");
        }
        else{
            result = number1 / number2;
        }
         
        default:
           printf("invalid operator \n");



    }

    printf("Result: %.4lf", result);

    






    return 0;
}