#include <stdio.h>

int main() {
    long long N, L;
    
    if (scanf("%lld %lld", &N, &L) == 2) {
        long long perimeter = N * L;
        
        printf("%lld\n", perimeter);
    }
    
    return 0;
}
