#include <stdio.h>

int main() {
    int T1, T2, T3, T4;
    
    if (scanf("%d %d %d %d", &T1, &T2, &T3, &T4) == 4) {
        int total_devices = T1 + T2 + T3 + T4 - 3;
        
        printf("%d\n", total_devices);
    }
    
    return 0;
}
