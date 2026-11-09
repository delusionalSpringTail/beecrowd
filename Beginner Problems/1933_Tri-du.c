#include <stdio.h>

int main() {
    int A, B;
    
    if (scanf("%d %d", &A, &B) == 2) {
        if (A >= B) {
            printf("%d\n", A);
        } else {
            printf("%d\n", B);
        }
    }
    
    return 0;
}
