// Q143 (Enum)
// 📋
// Find and print the student with the highest marks.
// Show Sample Test Cases
// Input 1:
// 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
// Output 1:
// Topper: Ravi (Marks: 95)
// Explanation 1:
// Program compares marks of all students and prints the one with the highest.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);   // number of students

    struct Student s[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    int topper = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    // Output topper
    printf("Topper: %s (Marks: %.0f)", s[topper].name, s[topper].marks);

    return 0;
}
