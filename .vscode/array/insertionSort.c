#include <stdio.h>
#include <math.h>

void insertionSort (int arr[], int N){
    //starting from the second element
    for(int i= 1; i < N; i++){
        int key = arr[i];
        int j = i -1;
        //move element of arr[0..i-1], that are
        //greater than key, to one position to
        //the right of their current position

        while(j >= 0 && arr[j]){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        //move the key to its current position
        arr[j + 1] = key;
    }
}

int main (){
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr)/ sizeof(arr[0]);

    printf("unsorted array: ");
    for(int i = 0; i < N; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    // calling insertion sort on array arr
    insertionSort(arr, N);

    printf("Sorted array : ");
    for (int i = 0; i < N; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}