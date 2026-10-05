#include<stdio.h>

/*int main(){
    int n = 5;

    //outer loop to print all rows
    for (int i = 0; i < n; i++){
        //inner loop to print each row
        for (int j = 0; j < n - i; j++)
           printf("* ");
        printf("\n");
    }
    return 0;
}*/

/*int main (){
    int n = 20;
    

    //first loop to print all rows
    for(int i = 0; i < n; i++){
        // first inner loop for printing white spaces

        for(int j = 0; j < 2 * i; j++)
            printf(" ");

        //second inner loop for printing stars 

        for (int k =0; k < n -i; k++){
            printf("%d ", k + 1);
        }
            
        printf("\n");
    }
    return 0;
    

}*/

int main(){
    int n = 10;

    // first loop for printing all the rows
    for (int i = 0; i < n; i++){
        //first inner loop for printing leading white spaces
        for (int j = 0; j < 2 * i; j++){
            printf(" ");

        //second inner loop for printing stars
        for (int k = 0; k < 2 * (n - i)- 1 ; k++){
            printf("* ");
        } 
        printf("\n");


        }
    }
    return 0;
}