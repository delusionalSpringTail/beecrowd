#include <stdio.h>
 
int main() {
 
   double userInput;
    scanf("%lf", &userInput);

    int cents = round(userInput * 100);

    int money100 = cents / 10000;
    cents = cents % 10000;

    int money50 = cents / 5000;
    cents = cents % 5000;

    int money20 = cents / 2000;
    cents = cents % 2000;

    int money10 = cents / 1000;
    cents = cents % 1000;

    int money5 = cents / 500;
    cents = cents % 500;

    int money2 = cents / 200;
    cents = cents % 200;

    int money1 = cents / 100;
    cents = cents % 100;

    int moneyPoint50 = cents / 50;
    cents = cents % 50;

    int moneyPoint25 = cents / 25;
    cents = cents % 25;

    int moneyPoint10 = cents / 10;
    cents = cents % 10;

    int moneyPoint5 = cents / 5;
    cents = cents % 5;

    int moneyPoint1 = cents / 1;
    cents = cents % 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", money100);
    printf("%d nota(s) de R$ 50.00\n", money50);
    printf("%d nota(s) de R$ 20.00\n", money20);
    printf("%d nota(s) de R$ 10.00\n", money10);
    printf("%d nota(s) de R$ 5.00\n", money5);
    printf("%d nota(s) de R$ 2.00\n", money2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", money1);
    printf("%d moeda(s) de R$ 0.50\n", moneyPoint50);
    printf("%d moeda(s) de R$ 0.25\n", moneyPoint25);
    printf("%d moeda(s) de R$ 0.10\n", moneyPoint10);
    printf("%d moeda(s) de R$ 0.05\n", moneyPoint5);
    printf("%d moeda(s) de R$ 0.01\n", moneyPoint1);

 
    return 0;
}