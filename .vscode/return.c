#include<stdio.h>
#include<stdbool.h>
bool ageCheck(int age){
    if(age<=18){
        return true;
    }
    else{
        return false;
    }
}

double square(int num){
return num * num;
}

double cube(double num){
    

    return num * num * num;
}

int main(){

    // return = returns a value back to where you call a function 

     double x = cube(2.9);
     double y = cube(3.8);
     double z = cube(4.7);

     int n = square(2);
     int m = square(3);
     int o = square(4);



     printf("%lf\n", x);
     printf("%lf\n", y);
     printf("%lf\n", z);

     printf("%d\n", n);
     printf("%d\n", m);
     printf("%d\n", o);



     int age = 23;

     if(ageCheck(age)){
        printf("you may smoke");
     }
     else{
        printf("you must be 18+ to smoke");
     }



    return 0;
}