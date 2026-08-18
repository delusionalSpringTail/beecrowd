#include <stdio.h>

int main()
{
    float earning;
    scanf("%f", &earning);

    if (earning >= 0 && earning <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (earning <= 3000.00)
    {
        float tax = (earning - 2000.00) * 0.08;
        printf("R$ %.2f\n", tax);
    }
    else if (earning <= 4500.00)
    {
        float tax = 80.00 + (earning - 3000.00) * 0.18;
        printf("R$ %.2f\n", tax);
    }
    else
    {
        float tax = 350.00 + (earning - 4500.00) * 0.28;
        printf("R$ %.2f\n", tax);
    }

    return 0;
}