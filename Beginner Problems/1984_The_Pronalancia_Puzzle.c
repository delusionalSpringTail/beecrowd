#include <stdio.h>

int main() {
    unsigned long long n;
    
    if (scanf("%llu", &n) == 1) {
        
        while (n > 0) {
            printf("%llu", n % 10);
            n /= 10;
        }
        
        printf("\n");
    }
    
    return 0;
}
