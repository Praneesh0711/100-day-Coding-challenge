#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for(i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks of student %d: ", i+1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Find topper
    for(i = 1; i < n; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print topper details
    printf("Topper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
