//C program to illustrate the sin() function
#include<math.h>
#include<stdio.h>

int main()
{
    double angle1 = 3.1416;
    double angle2 = 10;

    //print the sin value of angle 1 and angle 2

    printf("sin(3.14) = %.2lf\n", sin(angle1));

    printf("sin(10) = %.2lf", sin(angle2));

    return 0;
}