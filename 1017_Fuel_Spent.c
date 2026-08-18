#include <stdio.h>
 
int main() {
 
    int timeSpent, speed;
    float liters;

    scanf("%d %d", &timeSpent, &speed);
    liters = (timeSpent * speed) / 12.0;

    printf("%.3f\n", liters);
 
    return 0;
}