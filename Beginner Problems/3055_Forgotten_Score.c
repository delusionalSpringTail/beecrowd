#include <stdio.h>

int main() {
    int A, M;
    
    while (scanf("%d %d", &A, &M) == 2) {
        int B = (2 * M) - A;
        printf("%d\n", B);
    }
    
    return 0;
}
