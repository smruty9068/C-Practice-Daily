#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter x: ");
    scanf("%f", &x);

    double series = (x - 1) / x;
    double commonTerm = series;

    for (int i = 2; i < 10; i++) {
        series += 0.5 * (pow(commonTerm, i));
    }
    printf("The sum of first 9 terms is %.2lf .", series);
    return 0;
}