
// Q140 (Enum)
// 📋
// Define a struct with enum Gender and print person's gender.
// Show Sample Test Cases
// Input 1:
// Gender=MALE
// Output 1:
// Male
// Explanation 1:
// The enum inside the struct allows representing gender as a named constant.
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    scanf("%s", input);

    struct Person p;

    // Convert input to enum
    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    // Print gender
    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}
