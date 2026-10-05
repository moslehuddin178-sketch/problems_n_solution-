#include<stdio.h>
#include<string.h>

int main(){
    /*while loop = continue some code WHILE the condition remain true
    //             condition must be true for us to enter while loop

    int num = 0;

    do{
        printf("Enter any number greater than zero : ");
        scanf("%d", &num);
    }while(num <= 0);*/

    char name[50] = " ";
    char exit = '\0';

    printf("Enter your full name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

   do{
        printf("name can not be empty ! please enter your name : ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';

    } while(strlen(name) == 0);

    printf("your name is taken press 'N' to exit : ");
    scanf("%c", &exit);

    return 0;
}