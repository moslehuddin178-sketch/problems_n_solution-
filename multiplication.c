// multiplication table using a number
#include<stdio.h>
void print_table(int range, int num){
    //taking two integervariables row and column
    int row, col ;
    //Initializing row with range of multiplication table
    row = range;
    //initializing column with 3
    col = 3;

    // creating a 2-D array to calculate and store the multiplication table
    int arr[row][col];

    //for loop to calculate the table
    for (int k = 0; k < row; k++){
        //// sorting the number in the first column
        arr[k][0] = num;
        
        // sorting the value to be multiplied in the second column
        arr[k][1] = k + 1;

        //calculating and sorting the product in the third column
        arr[k][2] = arr[k][1] * arr[k][0];
    }

    //for loop to print the multiplication table
    for(int i = 0; i < row; i++){
        printf("%d * %d = %d", arr[i][0], arr[i][1], arr[i][2]);
        printf("\n");
    }
}

//driver code
int main(){
    // the range of multiplication table
    int range = 0;
    printf("please enter the range of the row : ");
    scanf("%d", &range);
    
    // the number to calculate the multiplication table
    int num = 5;

    //calling the function
    print_table(range, num);

    return 0;
}