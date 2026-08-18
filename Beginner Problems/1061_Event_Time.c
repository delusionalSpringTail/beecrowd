#include <stdio.h>
 
int main() {
 
    char string[10];
    char colon;

    int day1, day2, h1, m1, s1, h2, m2, s2;

    scanf("%s %d", string, &day1);
    scanf("%d %c %d %c %d", &h1, &colon, &m1, &colon, &s1);

    scanf("%s %d", string, &day2);
    scanf("%d %c %d %c %d", &h2, &colon, &m2, &colon, &s2);

    int totalSecondsDay1 = (day1 * 86400) + (h1 * 3600) + (m1 * 60) + s1;
    int totalSecondsDay2 = (day2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;

    int diff = totalSecondsDay2 - totalSecondsDay1;

    int dia = diff / 86400;
    diff %= 86400;

    int hora = diff / 3600;
    diff %= 3600;

    int minuto = diff / 60;
    diff %= 60;

    int segundo = diff;

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);

 
    return 0;
}