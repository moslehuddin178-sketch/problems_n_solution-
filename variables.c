#include<stdio.h>
#include<stdbool.h>

int main(){
    // variable = a variable is a container for a value
    // behaves as if it were the value it contains.
    int mosleh_age = 22;
    float miraz_age = 29.8;
    int quantity = 5;
    int tree = 1000;
    int masala = 122;
    float gpa = 3.50;
    float price = 122.34;
    float temperature = -10.23;
    double pi = 3.141590394940059055065;
    char grade = 'D';
    char pipe_grade = 'A';
    char currency ='B';
    char my_name[] = "Mosleh Uddin";
    bool is_active = true;
    bool is_available = false;
    

    if(is_available){
        printf("the item is available in the store\n");
    }else{
        printf("the item is not available in the store\n");
    }


    if(is_active){
        printf("the user is ACTIVE\n");

    }else{
        printf("the user is NOT ACTIVE\n");
    }


    printf("you are %d years old\n",mosleh_age);
    printf("miraz is %f years old\n",miraz_age);
    printf("miraz is %d years old\n",quantity);
    printf("here is %d trees in this street\n",tree);
    printf("asad uses %d diffrent of masala in his cooking\n",masala);
    printf("mosleh's gpa is %.2f\n",gpa);
    printf("the total price of your grocories is $%.2f",price);
    printf("today's temperature is %.1f\n",temperature);
    printf("the value of pi is%.13lf\n",pi);
    printf("the grade of your mathematics is %c\n",grade);
    printf("the pipe used in our system is %c\n",pipe_grade);
    printf("the short name of bangladeshi currency is %c\n",currency);
    printf("the full name of the owner of this machine is %s\n",my_name);
    
    
    return 0;
}