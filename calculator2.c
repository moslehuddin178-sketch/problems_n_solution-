//C program to make a simple calculator using switch-case statements
#include<stdio.h>
#include<float.h>

int main(){
    char op;
    double a, b, res;

    // read the operator
    printf("enter an operator (+ - * /) : ");
    scanf("%c", &op);

    // read the two numbers
    printf("enter two operands : ");
    scanf("%lf %lf", &a, &b);
    

    // define all four operations in the corresponding
    //switch-case

    switch (op){
        case '+':
            res = a + b;
        break;

        case '-':
            res = a - b;
        break;

        case '*':
            res = a * b;
        break;

        case '/':
            res = a / b;
        break;

        default:

        printf("Error! Incorrect operator value\n");
        res = -DBL_MAX;
    }
    if(res!= -DBL_MAX)
    printf("%.2lf", res);

    return 0;
}