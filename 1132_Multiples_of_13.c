#include <stdio.h>

int main() {
    int first, second;
    scanf("%d %d",&first,&second);

    if (first>second)
    {
        int temp = first;
        first = second;
        second = temp;
    }
    int sum = 0;
    for (int i = first; i <= second; i++)
    {
        if (i % 13 != 0 )
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}   