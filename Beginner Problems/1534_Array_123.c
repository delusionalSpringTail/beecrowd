#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                
                if (col + row == N - 1) {
                    printf("2");
                }
                else if (row == col) {
                    printf("1");
                }
                else {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
