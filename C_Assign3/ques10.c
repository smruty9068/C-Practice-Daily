
#include <stdio.h>
#include <string.h>
#include <math.h>

void binaryToHex(char *binary) {
    int length = strlen(binary);
    int decimalValue = 0;

    for (int i = length; i >= 0; i--) {
        if (binary[i] == '1') {
            decimalValue += pow(2, i);
        }
    }

    printf("Hexadecimal: %X\n", decimalValue);
}

int main() {
    char binary[30];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHex(binary);

    return 0;
}
