#include<stdio.h>

// function to calculate simple interest 
float simInt(float p, float r, float t){
    return(p * r * t)/100;
}
int main(){
    //input values
    float p = 10000, r = 12, t = 1, SI;

    //call functions to calculate simple interest
    SI = simInt( p,r,t);

    //display result
    printf("simple Interest : %.2f\n", SI);

    return 0;
}