#include <stdio.h>

int can_form_triangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int A, B, C, D;
    
    if (scanf("%d %d %d %d", &A, &B, &C, &D) != 4) {
        return 0;
    }
    
    if (can_form_triangle(A, B, C) || 
        can_form_triangle(A, B, D) || 
        can_form_triangle(A, C, D) || 
        can_form_triangle(B, C, D)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}
