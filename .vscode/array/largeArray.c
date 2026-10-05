#include<stdio.h>

/*int findMax(int arr[], int n){
    //Assume the first element is the largest

    int max = arr[0];
    for (int i = 1; i < n; i++){
        //update max if arr[i] is greater

        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {5,2,7,6,100, 99};

    int n = sizeof(arr)/ sizeof(arr[0]);
    printf("%d\n", findMax(arr,n));
    return 0;
}*/
// using recursion
#include <stdio.h>

// Recursive approach to find the maximum element
int findMax(int arr[], int n) {
  
    // Base case: Only one element
    if (n == 1) return arr[0];
  
  	// Find  maximum from the rest of the array
    int max = findMax(arr, n - 1);
  
  	// Return smaller element between curent element
  	// or maximum element in rest of the array
    return arr[n - 1] > max ? arr[n - 1] : max;
}

int main() {
    int arr[] = {5, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
  
	// Finding and printing the maximum element
    printf("%d\n", findMax(arr, n));
  
    return 0;
}