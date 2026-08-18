#include <stdio.h>

int main()
{
    int first = -5, last = 6;
    scanf("%d %d",&first,&last);

    int big, small;

    if (first > last){big = first;small = last;}

    if (last > first){big = last;small = first;}

    if (small % 2 != 0){small++;}

    if(small == big){printf("%d",0);}
    

int sumOfOddNumber = 0;
    for (int i = small; i < big; i++)
    {
        if (i % 2 != 0)
        {   
            sumOfOddNumber += i;
        }
    }
    printf("%d\n",sumOfOddNumber);
    
    return 0;
}