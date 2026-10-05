#include<stdio.h>

int binarySearch (int arr[], int left, int right, int key)
{
    //are no elements to consider in the given subarray

    while (left <= right)
    {
        //calculating mid point 
        int mid = left + (right - left) / 2 ;

        //check if key is present at mid
        if (arr[mid] == key){
            return mid;
        }
        //if key greater than arr[mid], ignore left half

        if(arr[mid]< key)
        {
            left = mid + 1;
        }
        // if key is smaller than or equal to arr[mid], ignore right half
        else{
            right = mid - 1;
        }
    }
    //if we reach here, then element was not present
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    //element to be searched
    int key = 23;

    int result = binarySearch(arr, 0, size - 1, key);

    if(result == -1){
        printf("Element is not present in the array");
    }
    else{
        printf("Element is present at index %d", result);
    }
    return 0;
}