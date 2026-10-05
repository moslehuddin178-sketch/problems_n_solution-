// C program to find the largest number among three
// using nested if-else
#include<stdio.h>
// finding the largest number using relational operator
int main(){
    int c = 10, b = 22, a = 9;
    if( a >= b ){
        if(a >= c)
           printf("%d is the largest number.", a);
        else
           printf("%d is the largeest number.", c);

    }
    else{
        if(b >= c)
           printf("%d is the largeest number.", b);
        else
           printf("%d is the largeest number.", c);  
    }
    return 0;
}