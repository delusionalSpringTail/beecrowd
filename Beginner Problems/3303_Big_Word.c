#include <stdio.h>
#include <string.h>

int main() {
    char word[30];
    
    while (scanf("%s", word) == 1) {
        if (strlen(word) >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }
    
    return 0;
}
