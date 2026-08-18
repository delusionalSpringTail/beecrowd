#include <stdio.h>
 
int main() {
 
    int userInput;
    scanf("%d",&userInput);
    int money100 = userInput / 100;
    int money50 = (userInput - money100 * 100) / 50;
    int money20 = (userInput - (money100 * 100 + money50 * 50)) / 20;
    int money10 = (userInput - (money100 * 100 + money50 * 50 + money20 * 20)) / 10;
    int money5 = (userInput - (money100 * 100 + money50 * 50 + money20 * 20 + money10 * 10)) / 5;
    int money2 = (userInput - (money100 * 100 + money50 * 50 + money20 * 20 + money10 * 10 + money5 * 5)) / 2;
    int money1 = (userInput - (money100 * 100 + money50 * 50 + money20 * 20 + money10 * 10 + money5 * 5 + money2 * 2)) / 1;

    printf("%d\n",userInput);
    printf("%d nota(s) de R$ 100,00\n", money100);
    printf("%d nota(s) de R$ 50,00\n", money50);
    printf("%d nota(s) de R$ 20,00\n", money20);
    printf("%d nota(s) de R$ 10,00\n", money10);
    printf("%d nota(s) de R$ 5,00\n", money5);
    printf("%d nota(s) de R$ 2,00\n", money2);
    printf("%d nota(s) de R$ 1,00\n", money1);
 
    return 0;
}