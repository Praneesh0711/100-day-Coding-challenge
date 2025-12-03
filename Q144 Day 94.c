#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};


// Function that accepts a structure as parameter and prints its members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    // Call function to print student details
    printStudent(s);

    return 0;
}
