// Q146 (Enum)
// 📋
// Create Employee structure with nested Date structure for joining date and print details.
// Show Sample Test Cases
// Input 1:
// Employee: Raj | ID: 11 | Joining Date: 12 05 2020
// Output 1:
// Name: Raj | ID: 11 | Joining Date: 12/05/2020
// Explanation 1:
// Nested structure Date is used inside Employee structure to represent joining date.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;   // nested structure
};

int main() {
    struct Employee e;

    // Input
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    // Output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id,
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
