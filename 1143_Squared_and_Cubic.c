#include <stdio.h>

int main()
{

  int userInput;
  scanf("%d", &userInput);

  for (int i = 1; i <= userInput; i++)
  {
    printf("%d %d %d\n", i, i * i, i * i * i);
  }

  return 0;
}