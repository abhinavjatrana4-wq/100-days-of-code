// 🧱
// Q147 (Enum)
// 📋
// Store employee data in a binary file using fwrite() and read using fread().
// Show Sample Test Cases
// Input 1:
// Employee details entered and stored in file.
// Output 1:
// Displays employee data read from file.
// Explanation 1:
// Demonstrates writing and reading structures using binary file handling functions.
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input employee data
    scanf("%s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    // Write to binary file
    FILE *fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("Name: %s | ID: %d | Salary: %.2f",
           e2.name, e2.id, e2.salary);

    return 0;
}
