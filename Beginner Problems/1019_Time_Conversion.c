#include <stdio.h>
 
int main() {
 
    int sec;
    scanf("%d",&sec);

    int hours, minutes,seconds,remain;
    hours = sec / 3600;
    remain = sec % 3600;
    minutes = remain / 60;
    remain %= 60;
    seconds = remain;

    printf("%d:%d:%d\n",hours,minutes,seconds);
 
    return 0;
}