// Q150 (Enum)
// 📋
// Use pointer to struct to modify and display data using -> operator.
// Show Sample Test Cases
// Input 1:
// Student pointer modifying values: John 106 91
// Output 1:
// Modified Data: Name: John | Roll: 106 | Marks: 91
// Explanation 1:
// Pointer to structure accesses and modifies data using the arrow (->) operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;   // pointer to struct

    // Modify values using pointer and -> operator
    scanf("%s", ptr->name);
    scanf("%d", &ptr->roll);
    scanf("%f", &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
