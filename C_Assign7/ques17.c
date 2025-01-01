// Initialize one of the variable of the question-16 structure with values ”jupiter”, 142.34, 16, 11.9, 9.23
#include <stdio.h>
/*typedef in C is a keyword used to create a new name (alias) for an existing data type.
 It helps improve code readability, maintainability, and makes complex type definitions more manageable.*/
typedef struct {
    char name[30];       // Planet's name
    double diameter;     // Diameter in thousands of kilometers
    int moons;           // Number of moons
    double or_time;      // Orbital period (in Earth years)
    double ro_time;      // Rotational period (in Earth hours)
} planet_t;

int main() {
    // Initialize the structure variable
    planet_t planet = {
        "Jupiter",      // Name of the planet
        142.34,         // Diameter in thousands of kilometers
        16,             // Number of moons
        11.9,           // Orbital period (in Earth years)
        9.23            // Rotational period (in Earth hours)
    };

    // Print the initialized values
    printf("Planet: %s\n", planet.name);
    printf("Diameter: %.2f thousand km\n", planet.diameter);
    printf("Moons: %d\n", planet.moons);
    printf("Orbital Period: %.2f years\n", planet.or_time);
    printf("Rotational Period: %.2f hours\n", planet.ro_time);

    return 0;
}
