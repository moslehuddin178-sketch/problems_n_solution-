#include<stdio.h>

int main(){
    // Variables of int, float, char and double
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    //Determine and Print the size of int
    printf("Size of int is: %lu bytes \n", sizeof(integerType));

    //Determine and Print the size of float
    printf("Size of float is: %lu bytes \n", sizeof(floatType));

    //Determine and Print the size of char
    printf("Size of char is: %lu bytes \n", sizeof(charType));

    //Determine and Print the size of double
    printf("Size of double is: %lu bytes \n", sizeof(doubleType));

    return 0;
}