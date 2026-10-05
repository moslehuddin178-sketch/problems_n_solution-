#include<stdio.h>

//function that takes 2d array as parameter

void print(int arr[3][3],int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }
}

int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    //passing the arry along with the size of rows and columns
    print(arr, 3,3);

    return 0;
}