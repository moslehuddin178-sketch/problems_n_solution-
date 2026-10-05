/*#include<stdio.h>
 int main(){
    int n = 10;

    //outer loop for printing rows
    for(int i = 0; i < n ; i++){
        
        //inner loop for printing * in each rows
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
 }*/



#include<stdio.h>


/*int main(){

    int n = 20;

    //outer loop for printing rows
    for (int i = 0; i < n; i++){
        //inner loop for printing * in each roes
        for (int j = 0; j <= i; j++)
            printf ("%d ", j + 1);
        printf("\n");
    }
    return 0;
}*/

int main(){
    int n = 26;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            printf("%c ", j + 'A');
        printf("\n");

    }
    return 0;
}