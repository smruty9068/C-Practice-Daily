// Declare a pointer to the structure type planet_t and initialize the structure components with the help of the pointer.
#include <stdio.h>

// Define the structure type planet_t
typedef struct {
    char name[30];        // Planet name
    double diameter;      // Diameter in thousands of kilometers
    int moons;            // Number of moons
    double or_time;       // Orbital period (in Earth years)
    double ro_time;       // Rotational period (in Earth hours)
} planet_t;

int main() {
    // Declare a variable of type planet_t
    planet_t planet;

    // Declare a pointer to the structure
    planet_t *ptr = &planet;

    // Initialize the structure components using the pointer
    snprintf(ptr->name, sizeof(ptr->name), "Saturn"); // Use '->' to access members
    ptr->diameter = 120.54; // Initialize diameter
    ptr->moons = 83;        // Initialize number of moons
    ptr->or_time = 29.4;    // Initialize orbital period
    ptr->ro_time = 10.7;    // Initialize rotational period

    // Print the initialized values
    printf("Planet: %s\n", ptr->name);
    printf("Diameter: %.2f thousand km\n", ptr->diameter);
    printf("Moons: %d\n", ptr->moons);
    printf("Orbital Period: %.2f years\n", ptr->or_time);
    printf("Rotational Period: %.2f hours\n", ptr->ro_time);

    return 0;
}

/*Arrow Operator (->):

Used to access members of a structure when working with pointers.
Equivalent to (*ptr).member.
Pointer-Based Initialization:
Allows dynamic and flexible initialization of structure members.
Useful when dealing with dynamically allocated structures.*/