#include <stdio.h>

int main() {
    int A, B;
    
    while (scanf("%d %d", &A, &B) == 2) {
        if (B > A) {
            printf("ok\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}
