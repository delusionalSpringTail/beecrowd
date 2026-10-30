#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    int house_area, land_area, land_side;

    while (1) {
        scanf("%d", &A);
        
        if (A == 0) {
            break;
        }


        scanf("%d %d", &B, &C);


        house_area = A * B;
        land_area = (house_area * 100) / C;
        land_side = (int)sqrt(land_area);


        printf("%d\n", land_side);
    }

    return 0;
}
