// Q142 (Enum)
// 📋
// Store details of 5 students in an array of structures and print all.
// Show Sample Test Cases
// Input 1:
// Details of 5 students (Name, Roll, Marks)
// Output 1:
// Tabular list of all 5 students with their details
// Explanation 1:
// The array of structures stores multiple student records and displays them in a table.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {

    struct Student s[5];

 
    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    
    printf("Name\tRoll\tMarks\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
