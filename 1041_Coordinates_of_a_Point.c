#include <stdio.h>
 
int main() {
 
    float point1, point2;
    scanf("%f %f", &point1, &point2);

    if (point1 == 0 && point2 == 0)
    {
        printf("Origem\n");
    }
    else if ((point1 > 0 || point1 < 0) && point2 == 0)
    {
        printf("Eixo X\n");
    }
    else if (point1 == 0 && (point2 > 0 || point2 < 0))
    {
        printf("Eixo Y\n");
    }
    else if (point1 > 0 && point2 > 0)
    {
        printf("Q1\n");
    }
    else if (point1 < 0 && point2 > 0)
    {
        printf("Q2\n");
    }
    else if (point1 < 0 && point2 < 0)
    {
        printf("Q3\n");
    }
    else
    {
        printf("Q4\n");
    }
 
    return 0;
}