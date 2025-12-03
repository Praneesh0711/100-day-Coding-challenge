#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll_no);

        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);
    }

    // Print details in tabular format
    printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");
    for(i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
