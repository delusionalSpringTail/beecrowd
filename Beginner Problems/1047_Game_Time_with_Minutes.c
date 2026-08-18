#include <stdio.h>
 
int main() {
 
    int startHour, startMinutes, endHour, endMinutes;

    scanf("%d %d %d %d", &startHour, &startMinutes, &endHour, &endMinutes);

    int startTotalMinutes = (startHour * 60) + startMinutes;
    int endTotalMinutes = (endHour * 60) + endMinutes;

    if (startTotalMinutes == endTotalMinutes)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if (startTotalMinutes<endTotalMinutes)
    {
        int remain = endTotalMinutes - startTotalMinutes;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (remain / 60), (remain % 60));
    }
    else if (startTotalMinutes>endTotalMinutes)
    {
        int remain = (endTotalMinutes+(24*60)) - startTotalMinutes;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (remain / 60), (remain % 60));
    }
 
    return 0;
}