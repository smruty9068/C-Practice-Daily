
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countEachCharacter(char str[], int size);
void countEachCharacter(char str[], int size) {
    int counter[256] = {0};

    for (int i = 0; i < size; i++) {
        counter[tolower(str[i])]++;
    }

    printf("The count of each character in the string \"%s\" is:\n", str);
    for (int i = 0; i < size - 1; i++) {
        if (str[i] != ' ' && str[i])
            printf("%c - %d, ", str[i], counter[tolower(str[i])]);
    }
}

int main() {
    char str[] = "Debadarshi Omkar";
    int size = sizeof(str) / sizeof(str[0]);
    countEachCharacter(str, size);

    return 0;
}
