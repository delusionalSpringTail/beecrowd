#include <stdio.h>

int main() {
    int m;
    int test_num = 1;
    
   
    while (scanf("%d", &m) == 1 && m != 0) {
        int result;
        
        scanf("%d", &result);
        
    
        for (int i = 1; i < m; i++) {
            char op;
            int num;
            scanf(" %c%d", &op, &num);
            
            if (op == '+') {
                result += num;
            } else if (op == '-') {
                result -= num;
            }
        }
        
        printf("Teste %d\n", test_num++);
        printf("%d\n\n", result);
    }
    
    return 0;
}
