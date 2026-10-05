#include<stdio.h>
#include<stdbool.h>

int main()
{
    float price = 100;
    bool isStudent = false;
    bool isSenior = true;

    if(isStudent){
           if(isSenior){
            printf("you will get 10 of discount on every product \n");
            printf("you get a senior discount of 20 \n");
            price = 0.7;
    }
    else{
        printf("you will get 10 of discount on every product \n");
        price *= 0.9;
    }  
        printf("you will get 10 of discount on every product \n");
        price *= 0.9;
    } else {
        printf("you have no discount ! \n");
    }
     if(isSenior){
            printf("you will get 10 of discount on every product \n");
            printf("you get a senior discount of 20 \n");
            price = 0.7;
    }
    

    

    printf("the price of a ticket is : %.2f\n", price);




    return 0;

}