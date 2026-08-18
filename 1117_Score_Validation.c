#include <stdio.h>

int main() {
    float first, second;

    while (1) {
        scanf("%f", &first);
        if (first >= 0 && first <= 10) {
            break;
        }
        printf("nota invalida\n");
    }

    while (1) {
        scanf("%f", &second);
        if (second >= 0 && second <= 10) {
            break;
        }
        printf("nota invalida\n");
    }

    printf("media = %.2f\n", (first + second) / 2.0);

    return 0;
}   