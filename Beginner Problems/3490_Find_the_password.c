#include <stdio.h>

int main() {
    int A, B, C, D;
    
    while (scanf("%d %d %d %d", &A, &B, &C, &D) == 4) {
        printf("%d%d%d%d\n", A, B, C, D);
    }
    
    return 0;
}
