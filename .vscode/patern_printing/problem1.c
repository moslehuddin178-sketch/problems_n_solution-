#include <stdio.h>
#include <stdbool.h>
#include<string.h>

int main() {
    char p[] = "cat";
    char s[] = "car";
    bool isSame= false;
    
    if (p == s){
        printf("yes the charecter match");
    }
    else{
        printf("the charecters dont match");
    }

    return 0;
}