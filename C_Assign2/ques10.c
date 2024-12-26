
#include <stdio.h>

void generateTable(int number);
void generateTable(int number) {
    printf("+-------------------------------------------+\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", number * i);
    }
    printf("   |\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("   |\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", number);
    }
    printf("   |\n+-------------------------------------------+");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    generateTable(number);
    return 0;
}
