#include <stdio.h>
int main(){

    int number = 7;
    for (int i = 1; i <=9; i+=2)
    {
        for (int j = number; j >= number-2; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        number += 2;
        
    }

    return 0;
}