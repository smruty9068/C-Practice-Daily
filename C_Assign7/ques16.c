 //Declare two variable of the structure type planet
 typedef struct{// Define a structure to represent a planet
 char name[30];        // Name of the planet
    double diameter;      // Diameter of the planet in kilometers
    int moons;            // Number of moons the planet has
    double or_time;       // Orbital period (time taken to orbit the sun in Earth years)
    double ro_time;       // Rotational period (time taken to rotate once in Earth hours)
} planet_t;
int main(){
    //declaring 2 variables of type plamet_t
    planet_t planet1,planet2;
     // Initialize planet1 with data
    snprintf(planet1.name, sizeof(planet1.name), "Earth");
    //copy the string "Earth" into the name field of the planet1 structure
    /*snprintf writes the string "Earth" into the planet1.name buffer.
The sizeof(planet1.name) ensures that if the string exceeds the allocated space (30 bytes), 
it will be truncated to fit within the buffer, leaving space for the null terminator (\0).*/
    planet1.diameter = 12742.0;  // Diameter in km
    planet1.moons = 1;           // Earth's Moon
    planet1.or_time = 1.0;       // Orbital period in Earth years
    planet1.ro_time = 24.0;      // Rotational period in hours

    // Initialize planet2 with data
    snprintf(planet2.name, sizeof(planet2.name), "Mars");
    planet2.diameter = 6779.0;   // Diameter in km
    planet2.moons = 2;           // Phobos and Deimos
    planet2.or_time = 1.88;      // Orbital period in Earth years
    planet2.ro_time = 24.6;      // Rotational period in hours

    // Print the details of the planets
    printf("Planet 1: %s\n", planet1.name);
    printf("  Diameter: %.2f km\n", planet1.diameter);
    printf("  Moons: %d\n", planet1.moons);
    printf("  Orbital Period: %.2f years\n", planet1.or_time);
    printf("  Rotational Period: %.2f hours\n", planet1.ro_time);

    printf("\nPlanet 2: %s\n", planet2.name);
    printf("  Diameter: %.2f km\n", planet2.diameter);
    printf("  Moons: %d\n", planet2.moons);
    printf("  Orbital Period: %.2f years\n", planet2.or_time);
    printf("  Rotational Period: %.2f hours\n", planet2.ro_time);

    return 0;
}


/*Advantages of Using snprintf
Safety:
Prevents buffer overflow, which can happen if you use unsafe functions like strcpy without checking the buffer size.
Flexibility:
Allows formatting, such as including additional variables in the string (e.g., snprintf(buffer, size, "Planet: %s", name)).
Compatibility:
Works well in environments where memory safety is a concern.*/