
#include <stdio.h>

int main() {
    const float kmh_to_ms = 5.0 / 18.0;

    float takeoffSpeedKmh, distance;
    printf("Enter takeoff speed (km/hr): ");
    scanf("%f", &takeoffSpeedKmh);
    printf("Enter distance (in meters): ");
    scanf("%f", &distance);

    float takeoffSpeedMs = takeoffSpeedKmh * kmh_to_ms;
    float acceleration = (takeoffSpeedMs * takeoffSpeedMs) / (2 * distance);
    float time = takeoffSpeedMs / acceleration;

    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to takeoff speed: %.2f seconds\n", time);

    return 0;
}
