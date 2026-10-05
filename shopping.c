#include <stdio.h>
#include <string.h>

int main(){
    // SHOPPING CART PROGRAMME
    char item [50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency ='$';
    float total = 0.0f;

    printf("what item would you like to have?: ");
    fgets(item, sizeof(item), stdin);

    printf("what is the price of this item ?: ");
    scanf("%f", &price);

    printf("how many quantity would you like to take?: ");
    scanf("%d", &quantity);

   
    total = price * quantity ;
    printf("%f", currency , total);


    return 0;
};