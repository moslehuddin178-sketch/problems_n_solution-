// C program to demonstrate 
// addition of complex numbers
#include<stdio.h>
// define a structure for complex numbers
typedef struct complexNumber {
    int real;
    int img;
}complex;

// this number accepts two compelex numbers 
// as parameter and return addition of them
complex add(complex x, complex y);

//driver code
int main(){
    //define three compelx numbers
    complex a, b , sum;

    //first complex number
    a.real = 2;
    a.img = 3;

    //second complex number
    b.real = 2;
    b.img = 3;

    //print first complex number
    printf("\n sum =%d +%di", a.real, a.img);

    //print second complex number
    printf("\n sum =%d +%di", b.real, b.img);


    // call add(a,b) function and pass complex number a and b as a parameter
    sum = add(a, b);

    //print result 
    printf("\n sum =%d +%di", sum.real, sum.img);

    return 0;

}
// complex add(complex x, complex y)
complex add(complex x, complex y){
    // define a new complex number
    complex add;

    // add real part of a&b
    add.real = x.real + y.real;

    // add imaginary part of a&b
    add.img = x.img + y.img;

    return(add);
}


