#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1) {
        if (n <= 3) {
            printf("vai ganhar o biscoito\n");
        } else {
            printf("vai ficar sem o biscoito\n");
        }
    }
    
    return 0;
}
