// Q145 (Enum)
// 📋
// Return a structure containing top student's details from a function.
// Show Sample Test Cases
// Input 1:
// 3 students: Riya 101 89, Karan 102 96, Meena 103 92
// Output 1:
// Top Student: Karan | Roll: 102 | Marks: 96
// Explanation 1:
// The function returns the structure containing the highest scoring student's details.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int top = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];   // return the structure
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    // Input students
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    // Get top student
    struct Student top = getTopStudent(s, n);

    // Output
    printf("Top Student: %s | Roll: %d | Marks: %.0f",
           top.name, top.roll, top.marks);

    return 0;
}
