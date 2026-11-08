#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1) {
        int letter = 97 + (n - 1);
        printf("%c\n", letter);
    }
    
    return 0;
}
