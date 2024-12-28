#include <stdio.h>
struct Student {
    int id;
    char name[50];
};
int main() {
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // Accept a string with spaces

    printf("ID: %d, Name: %s\n", s.id, s.name);
    return 0;
}
