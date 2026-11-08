#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) == 1) {
        int answer;
        
        for (int i = 1; i <= n; i++) {
            scanf("%d", &answer);
            printf("resposta %d: %d\n", i, answer);
        }
    }
    
    return 0;
}
