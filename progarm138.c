
// Q138 (Enum)
// 📋
// Print all enum names and integer values using a loop.
// Show Sample Test Cases
// Input 1:
// No input
// Output 1:
// RED=0
// YELLOW=1
// GREEN=2
// Explanation 1:
// Iterating through enum values prints each constant with its assigned integer.
#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {

    // Array of enum names to print as strings
    const char *names[] = { "RED", "YELLOW", "GREEN" };

    // Loop through enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
