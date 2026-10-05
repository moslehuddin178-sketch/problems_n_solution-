#include<stdio.h>
#include<stdbool.h>

void hello(char name[], int age);

int main(){

    hello("Karim", 30);

    return 0;
}

void hello(char name[], int age){
    printf("hello %s \n", name);
    printf("you are %d years old\n", age);

}

bool ageCheck(int age){
    if( age=> 18){
        return true;
    }
    else{
        return false;
    }

}

