#include <stdio.h>

int main() {
    int n, speed, max_speed, i;

    while (scanf("%d", &n) != EOF) {
        max_speed = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &speed);
            if (speed > max_speed) {
                max_speed = speed;
            }
        }

        if (max_speed < 10) {
            printf("1\n");
        } else if (max_speed < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}
