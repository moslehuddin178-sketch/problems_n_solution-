#include<stdbool.h>
#include<stdio.h>

bool checkYear(int year){
    //if a year is multiple of 400, then it is a leap year
    if (year % 400 == 0)
       return true;
    //else if a year is multiple of 100, then it is not a leap year
    else if (year % 100 == 0)
        return false;
    // else if a year is multiple of 4, then it is a leap year
    else if (year % 4 == 0)
        return true;
    //if no condition is satisfied , then it is not a leap year
    return false;
}

int main(){
    int year = 0;
    printf("please enter the year: \n");
    scanf("%d", &year);
    
    if (checkYear(year)){
        printf("leap year");
    }
    else {
        printf("not a leap year");
    }
}