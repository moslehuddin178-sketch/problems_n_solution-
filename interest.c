#include<stdio.h>
#include<math.h>

int main(){
    // compound interest calculator
    double principal = 0.0;
    double interest = 0.0;
    int years = 0;
    int timesCompound = 0;
    double total = 0.0;

    printf("Compound interest calculator \n");

    printf("enter the principal (p): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate : ");
    scanf("%lf", &interest);
    interest = interest / 100;


    printf("Enter the number of years : ");
    scanf("%d", &years);

    printf("Enter the number of times compounded : ");
    scanf("%d", &timesCompound);

    total = principal* (1+(interest / timesCompound) *pow(years, 1));

    printf("after %d years, the total will be $%.2lf", years, total);


    return 0;
}