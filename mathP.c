#include<stdio.h>
#include<math.h>

int main(){

    double redius = 0.0;
    double area = 0.0;
    double surface = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("enter the redius: ");
    scanf("%lf",&redius);



    area = PI * pow(redius, 2);
    surface = 4* PI * pow(redius, 2);
    volume = (4.0 / 3.0)* PI * pow(redius, 3);

    printf("%.2lfcm\n", area);
    printf("%0.2lfcm\n", surface);
    printf("%0.2lfcm", volume);



    return 0;
}