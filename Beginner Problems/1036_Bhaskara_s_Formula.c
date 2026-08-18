#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double underRoot = pow(B, 2) - 4.0 * A * C;

    if (A == 0 || underRoot < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        double result1 = (-B + sqrt(underRoot)) / (2.0 * A);
        double result2 = (-B - sqrt(underRoot)) / (2.0 * A);
        printf("R1 = %.5lf\n", result1);
        printf("R2 = %.5lf\n", result2);
    }

 
    return 0;
}