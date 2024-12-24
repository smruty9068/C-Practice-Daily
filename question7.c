
#include <stdio.h>

int main() {
    char desiredGrade;
    double minAverageRequired, currentAverage, finalPercentage, finalWeight,scoreNeeded;

    printf("Enter desired grade> ");
    scanf(" %c", &desiredGrade);

    printf("Enter minimum average required> ");
    scanf("%lf", &minAverageRequired);

    printf("Enter current average in course> ");
    scanf("%lf", &currentAverage);

    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf", &finalPercentage);

    finalWeight = finalPercentage / 100.0;

    scoreNeeded = (minAverageRequired - (currentAverage * (1 - finalWeight))) / finalWeight;

    printf("You need a score of %.2f on the final to get a %c.\n", scoreNeeded, desiredGrade);

    return 0;
}
