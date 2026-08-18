#include <stdio.h>
 
int main() {
 
    int userInput;
    scanf("%d", &userInput);
    int years, months, days, remainder;

    remainder = userInput;
    years = userInput / 365;
    remainder %= 365;

    months = remainder / 30;
    remainder %= 30;

    days = remainder;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
 
    return 0;
}