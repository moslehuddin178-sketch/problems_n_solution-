#include<stdio.h>

float farenheight_to_celsius(float f){
    return ((f - 32.0) *5.0 / 9.0);
}
int main(){
    float f = 80;
    printf("Temperature in Degree Celsius : %0.2f",
    farenheight_to_celsius(f));
    return 0;
}