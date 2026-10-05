#include<stdio.h>

int main()
{
    // weight conversion calculator
    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("1. Kilograms to pounds\n");
    printf("2.Pounds to kilograms\n");
    printf("Please! choose the option between 1 and 2 \n: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds : ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", pounds, kilograms);
    }
    else{
         printf("Please! choose the option between 1 and 2");
    }

    return 0;
}