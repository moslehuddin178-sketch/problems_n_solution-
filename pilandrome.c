/*#include<stdio.h>

int reverseNum(int N){
    //function to store the reversed number
    int rev = 0;

    while(N > 0){
        
        //extract the last digit
        int dig = N % 10;

        //append the digit to the reversed number
        rev = rev * 10 + dig;

        //remove the last digit
        N /= 10;
    }
    return rev;
}

int isPilandrome(int N){

    //negative numbers are not pilandromes
    if(N < 0)
       return 0;
    return N == reverseNum(N);
}

int main(){
    int N = 0;
    
    printf("Plese enter a number : ");
    scanf("%d", &N);

    if (isPilandrome(N)){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}*/

#include<stdio.h>
#include<string.h>

int isPilandrome(int n){
    char str[20];

    //convert the number to a string
    printf(str, "%d",n);

    //left pointer starting from first character
    int left = 0;

     //right pointer starting from last character
    int right = strlen(str)-1;

    //loop until the pointer meet in the middle
    while(left < right){
        // if mismatch is found (not a pilandrome)
        if(str[left]!= str[right]) {
            return 0;
        }
        // move pointers towards each other
        left++;
        right--;
    }
    return 1;

}

int main(){
    int num = 1221;

    //check if the number is a pilandrome and print the result
    if(isPilandrome(num)){
        printf("yes\n");
    
    }
    else{
        printf("no\n");
    } 
    return 0;

}