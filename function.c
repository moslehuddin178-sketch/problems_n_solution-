#include<stdio.h>
#include<string.h>

void happiBirthday(char name[], int age){
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday dear %s!", name);
    printf("\n Happy birthday to you!");
    printf("\n you are now %d old now!", age);
}

int main(){

    char name[] = " ";
    int age = 0;

    printf("Enter your name: \n");
    fgets(name,sizeof(name), stdin);
    name[strlen(name) -1 ] = '\0';


    printf("Enter your age :");
    scanf("%d", &age);

    happiBirthday(name, age);
    

    return 0;
}