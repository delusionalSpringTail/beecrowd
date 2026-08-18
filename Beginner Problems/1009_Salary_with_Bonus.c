#include <stdio.h>
 
int main() {
 
    char userNmae[100];
    scanf("%s", userNmae);
    double salary, value;
    scanf("%lf %lf", &salary, &value);
    double total = salary + (value * (15.0 / 100.0));
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}