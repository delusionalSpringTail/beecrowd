#include <stdio.h>
 
int main() {
 
    float salary;

    scanf("%f", &salary);

    if (salary >= 0 && salary<= 400.0)
    {
        printf("Novo salario: %.2f\n",salary+salary*(15.0/100));
        printf("Reajuste ganho: %.2f\n",salary*(15.0/100));
        printf("Em percentual: 15 %%\n");// how to print 15%
    }
    else if (salary >= 400.01 && salary<= 800.00)
    {
        printf("Novo salario: %.2f\n",salary+salary*(12.0/100));
        printf("Reajuste ganho: %.2f\n",salary*(12.0/100));
        printf("Em percentual: 12 %%\n");// how to print 12%
    }
    else if (salary >= 800.01 && salary<= 1200.00)
    {
        printf("Novo salario: %.2f\n",salary+salary*(10.0/100));
        printf("Reajuste ganho: %.2f\n",salary*(10.0/100));
        printf("Em percentual: 10 %%\n");// how to print 10%
    }
    else if (salary >= 1200.01 && salary<= 2000.00)
    {
        printf("Novo salario: %.2f\n",salary+salary*(7.0/100));
        printf("Reajuste ganho: %.2f\n",salary*(7.0/100));
        printf("Em percentual: 7 %%\n");// how to print 7%
    }
    else
    {
        printf("Novo salario: %.2f\n",salary+salary*(4.0/100));
        printf("Reajuste ganho: %.2f\n",salary*(4.0/100));
        printf("Em percentual: 4 %%\n");// how to print 4%
    }
 
    return 0;
}