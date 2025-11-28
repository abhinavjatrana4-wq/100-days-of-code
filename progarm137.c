// Q137 (Enum)
// 📋
// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
// Show Sample Test Cases
// Input 1:
// GUEST
// Output 1:
// Welcome Guest!
// Explanation 1:
// Enum value determines which message is displayed.

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    scanf("%s", input);

    enum Role role;

    // Convert input string to enum value
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else
        role = GUEST;   // default

    // Display message based on enum value
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
