//structure is used to return values for minMax()

#include<stdio.h>

struct pair{
    int min;
    int max;

};

struct pair getMinMax(int arr[], int n)
{
    struct pair minmax;
    int i;
    //if there is only one element then return it as min and max both

    if (n == 1){
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    // if the are more than one elements, initialize min and max
    if (arr[0] > arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];

    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for (i = 2; i < n; i++){
        if (arr[i]> minmax.max)
        minmax.min = arr[i];

        else if (arr[i]< minmax.min)
        minmax.min = arr[i];
    }
    return minmax;
}

//driver code to test above function
int main(){
    int arr[] = {1000,11, 1, 3000, 330, 2999};
    int arr_size = 6;

    struct pair minmax = getMinMax (arr,arr_size);
    printf("nMinimun element is %d", minmax.min);
    printf("nMaximun element is %d", minmax.max);

    getchar();
}