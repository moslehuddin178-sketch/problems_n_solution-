#include<stdio.h>

/*int main() {
    int nums[]= {2,9,5,14};
    int target = 14;
    
    int n = 4;

    for (int i = 0; i < 4; i++) {
        for( int j = 0; j < 4; j++) {
            if (nums[i] + nums[j] == target){
                printf("[%d, %d]\n", j, i);
                return 0;
            }
        }
    }
}*/

//there are 10 roll numbers of musleh from class 1 to 11, now i should find which two add up 14 in total 

int main(){
    int rolls[] = {18, 24,29, 11, 6, 4, 8, 42, 13, 5064};
    int target = 5106;

    int n = 10;
    
    for(int i =0; i<10; i++){
        for( int j = 0; j<10; j++) { 
            if(rolls[i] + rolls[j] == target) {
                printf("[%d ,%d]\n", j ,i);
                return 0;
            }
        }
    }
}
