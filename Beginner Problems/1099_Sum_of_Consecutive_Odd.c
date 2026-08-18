#include <stdio.h>

int main() {
    int userInput, X, Y, sum;
    scanf("%d", &userInput);
    
    for (int j = 0; j < userInput; j++) {
        scanf("%d %d", &X, &Y);
        sum = 0;
        
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}   