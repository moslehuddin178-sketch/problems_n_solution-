#include<stdio.h>

int main(){

/* for(int i = 1; i <= 4; i++){
         for(int a = 1 ; a <= 9; a++){
        printf("%3d ", a * i);
    }
    printf("\n");
    }*/ 

    int rows = 0;
    int colums = 0;
    char symbol = '\0';

    printf("Enter the # of rows : ");
    scanf("%d", &rows);

    printf("Enter the # of colums : ");
    scanf("%d", &colums);

    printf("Enter the the symbol that you want to have : ");
    scanf(" %c", &symbol);

   

    for(int i = 0; i < rows; i++){
         for(int i = 0; i < colums; i++){
        printf(" %c", symbol);
    }
    printf("\n");

        
    }







    return 0;
}