#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to find and return the top student
struct Student findTopper(struct Student students[], int n) {
    int i, topperIndex = 0;
    for(i = 1; i < n; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    return students[topperIndex];
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for(i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks of student %d: ", i+1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Get topper using function
    struct Student topper = findTopper(students, n);

    // Print topper details
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
