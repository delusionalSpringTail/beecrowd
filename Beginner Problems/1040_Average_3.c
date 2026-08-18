#include <stdio.h>
 
int main() {
 
    float N1, N2, N3, N4;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    float average = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    printf("Media: %.1f\n", average);
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");
        float duringExamNumber;
        scanf("%f", &duringExamNumber);

        float examScore = (duringExamNumber + average) / 2;

        printf("Nota do exame: %.1f\n", duringExamNumber);
        if (examScore >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", examScore);
        }
        else if (examScore <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", examScore);
        }
    }
    return 0;
}