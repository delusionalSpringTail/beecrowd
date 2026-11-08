#include <stdio.h>

int main() {
    int t;
    char villain[30];
    
    if (scanf("%d", &t) == 1) {
        while (t--) {
            scanf("%s", villain);
            
            printf("Y\n");
        }
    }
    
    return 0;
}
