
#include <stdio.h>

int main() {
    printf("Enter the distance in meters: ");
    float meters;
    scanf("%f", &meters);

    float kms = meters * 0.001;
    float cms = meters * 100;
    float mms = meters * 1000;
    float feets  = meters * 3.28084;
    float inches = meters * 39.3701;

    printf("+----------------------------------+\n");
    printf("| Unit            | Value          |\n");
    printf("+----------------------------------+\n");
    printf("| Meters          |%15.2f |  \n",meters);
    printf("| Kilometers      |%15.2f |  \n",kms);
    printf("| Centimeters     |%15.2f |  \n",cms);
    printf("| Millimeters     |%15.2f |  \n",mms);
    printf("| Feets           |%15.2f |  \n",feets);
    printf("| Inches          |%15.2f |  \n",inches);
    printf("+----------------------------------+\n");
}
