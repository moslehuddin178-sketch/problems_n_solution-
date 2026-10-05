#include<stdio.h>

int add(int x, int y){
    int result = x * y;
    return result;

}
int main(){
    // veriable scope = Refers to where a veriable is reconized and accessible.
    //.                 Variables can share the same name if they are in different scope {}

    result = add(10 , 30);
    printf("%d", result);
    
    return 0;
}