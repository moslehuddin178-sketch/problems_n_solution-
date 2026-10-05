#include<stdio.h>
#include<string.h>

//driver code
int main(){
    char  input[][20] = {"flower", "flow", "flight"};
    int numberOfstrings = 3;
    int prefixLength = 0;

    while (1){
        char currentChar = input [0] [prefixLength];
        if (currentChar =='\0'){
            break;
        }

        for (int i = 1; i <numberOfstrings ; i++){
            if (input[i][prefixLength] != currentChar){
                printf("Longest common prefix: ");

                for(int j = 0; j < prefixLength; j++){
                    printf("%c", input[0][j]);
                    
                    printf("\n");
                    return 0;
                }
            }
        }
        prefixLength++;
    }
    printf("Longest common prefix: ");

    for(int j = 0; j < prefixLength; j++){
        printf("%c", input [0][j]);
    }
    printf("\n");
    return 0;
}

