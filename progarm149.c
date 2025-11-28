// Q149 (Enum)
// 📋
// Use malloc() to allocate structure memory dynamically and print details.
// Show Sample Test Cases
// Input 1:
// Student allocated dynamically with details: Tina 105 88
// Output 1:
// Name: Tina | Roll: 105 | Marks: 88
// Explanation 1:
// Memory for structure is dynamically allocated on heap using malloc().
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Dynamically allocate memory
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    // Input values
    scanf("%s", s->name);
    scanf("%d", &s->roll);
    scanf("%f", &s->marks);

    // Output
    printf("Name: %s | Roll: %d | Marks: %.0f",
           s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
