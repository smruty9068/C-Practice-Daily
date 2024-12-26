
#include <stdio.h>

char findFirstRepetitive(char word[], int size);
char findFirstRepetitive(char word[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (word[i] == word[j]) {
                return word[i];
            }
        }
    }
    return '\0';
}

int main() {
    char word[] = "racecar";
    int size = sizeof(word) / sizeof(word[0]) - 1;

    char repetitive = findFirstRepetitive(word, size);
    if (repetitive != '\0') {
        printf("First repetitive character in %s is: %c", word, repetitive);
    } else {
        printf("No repetitive character in %s.", word);
    }

    return 0;
}
