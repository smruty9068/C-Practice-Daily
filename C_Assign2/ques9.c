
#include <stdio.h>

int main() {
    char choice;

    printf("Enter the choice of the character: ");
    scanf("%c", &choice);

    int rows = choice - 'A' + 1;

    for (int i = 0; i < rows; i++) {
        for (char ch = 'A'; ch < choice - i; ch++) {
            printf("%c ", ch);
        }

        if (i == 0) {
            printf("%c ", choice);
        } else {
            for (int j = 0; j < 2 * i + 1; j++) {
                printf("  ");
            }
        }

        for (char ch = choice - (i + 1); ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
