#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    char n1[101], o1[10], n2[101], o2[10];
    long long num1, num2;
    
    while (t--)
    {
        scanf("%s %s %s %s", n1, o1, n2, o2);
        scanf("%lld %lld", &num1, &num2); 

        long long sum = num1 + num2;

        if (sum % 2 == 0) 
        {
            if (strcmp(o1, "PAR") == 0) printf("%s\n", n1);
            else printf("%s\n", n2);
        }
        else 
        {
            if (strcmp(o1, "IMPAR") == 0) printf("%s\n", n1);
            else printf("%s\n", n2);
        }
    }
    return 0;
}
