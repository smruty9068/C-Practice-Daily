
#include <stdio.h>

int main() {
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) {
        printf("Invalid input.");
        return 0;
    }

    switch (marks) {
    case 95 ... 100:
        grade = 'O';
        break;

    case 81 ... 94:
        grade = 'A';
        break;

    case 71 ... 80:
        grade = 'B';
        break;

    case 61 ... 70:
        grade = 'C';
        break;

    case 51 ... 60:
        grade = 'D';
        break;

    case 41 ... 50:
        grade = 'E';
        break;

    default:
        grade = 'F';
    }

    printf("The student has secured %c grade.", grade);
    return 0;
}
