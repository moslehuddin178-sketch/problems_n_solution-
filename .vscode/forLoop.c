#include<stdio.h>
#include<unistd.h>



int main()
{
    //for loop= repeat some code a limited # of times
    //          for(initialization; condition; update)

    for(int i = 1 ; i <= 100; i++);
      if (i == 10){
        break;
      };
    printf("%d\n ", i );
    return 0;
}