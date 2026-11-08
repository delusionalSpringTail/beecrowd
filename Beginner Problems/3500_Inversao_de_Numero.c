#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1) {
        int units = n % 10;
        int tens = (n / 10) % 10;
        int hundreds = n / 100;
        
        int reversed = (units * 100) + (tens * 10) + hundreds;
        
        printf("Invertido = %d\n", reversed);
    }
    
    return 0;
}
