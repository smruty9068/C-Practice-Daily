 /*Numeric addresses for computers on the international network Internet are composed of four parts,
 separated by periods, of the form
 xx.yy.zz.mm
 where xx, yy, zz , and mm are positive integers. Locally, computers are usually known by a
 nickname as well. You are designing a program to process a list of Internet addresses, identifying all
 pairs of computers from the same locality. Create a structure type called address_t with components for the four integers of an Internet address and a fifth component in which to store an associated
 nickname of ten characters. Your program should read a list of up to 100 addresses and nicknames
 terminated by a sentinel address of all zeros and a sentinel nickname.
 Sample Data
 111.22.3.44 platte
 555.66.7.88 wabash
 111.22.5.66 green
 0.0.0.0 none
 The program should display a list of messages identifying each pair of computers from the same
 locality, that is, each pair of computers with matching values in the first two components of the
 address. In the messages, the computers should be identified by their nicknames.
 Example Message
 Machines platte and green are on the same local
 network.
 Follow the messages by a display of the full list of addresses and nicknames. Include in your program a scan_address function, a print_address function, and a local_address function.
 Function local_address should take two address structures as input parameters and return 1 (for
 true) if the addresses are on the same local network, and 0 (for false) otherwise.*/
#include <stdio.h>
#include <string.h>

#define MAX_ADDRESSES 100

// Define the structure type for Internet addresses
typedef struct {
    int xx, yy, zz, mm; // Four parts of the address
    char nickname[10];  // Associated nickname
} address_t;

// Function to read an address
void scan_address(address_t *addr) {
    printf("Enter address (xx.yy.zz.mm nickname): ");
    scanf("%d.%d.%d.%d %s", &addr->xx, &addr->yy, &addr->zz, &addr->mm, addr->nickname);
}

// Function to print an address
void print_address(const address_t *addr) {
    printf("%d.%d.%d.%d %s\n", addr->xx, addr->yy, addr->zz, addr->mm, addr->nickname);
}

// Function to check if two addresses are in the same locality
int local_address(const address_t *addr1, const address_t *addr2) {
    return (addr1->xx == addr2->xx && addr1->yy == addr2->yy);
}

int main() {
    address_t addresses[MAX_ADDRESSES];
    int count = 0;

    printf("Enter up to %d addresses. Use '0.0.0.0 none' to stop.\n", MAX_ADDRESSES);
    while (1) {
        address_t addr;
        scan_address(&addr);

        // Check for sentinel value to stop input
        if (addr.xx == 0 && addr.yy == 0 && addr.zz == 0 && addr.mm == 0 && strcmp(addr.nickname, "none") == 0) {
            break;
        }

        // Store the address and increment the count
        addresses[count++] = addr;
    }

    // Check for pairs of addresses on the same local network
    printf("\nMessages:\n");
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (local_address(&addresses[i], &addresses[j])) {
                printf("Machines %s and %s are on the same local network.\n", addresses[i].nickname, addresses[j].nickname);
            }
        }
    }

    // Display the full list of addresses and nicknames
    printf("\nFull List of Addresses and Nicknames:\n");
    for (int i = 0; i < count; i++) {
        print_address(&addresses[i]);
    }

    return 0;
}


/*
Structure Definition:

address_t stores the four parts of the IP address (xx, yy, zz, mm) and the associated nickname (nickname).
Functions:
scan_address:
Reads an address from the user.
Takes a pointer to an address_t structure as a parameter.
print_address:
Prints an address.
Takes a constant pointer to an address_t structure.
local_address:
Compares two address_t structures and checks if they belong to the same locality.
Returns 1 (true) if the first two components match, otherwise 0 (false).
Main Logic:
Reads up to 100 addresses using the scan_address function.
Stops input when the sentinel value (0.0.0.0 none) is entered.
Compares all pairs of addresses to identify machines in the same locality.
Prints messages for matching pairs and finally displays the full list of addresses and nicknames.
*/