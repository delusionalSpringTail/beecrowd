#include <stdio.h>
#include <stdlib.h>
int main()
{

    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);

    int firstsecond = (first + second + abs(first - second)) / 2;
    int greatest = (firstsecond + third + abs(firstsecond - third)) / 2;

    printf("%d eh o maior\n",greatest);

    return 0;
}