#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input details for first student
    printf("Enter details of Student1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll_no, &s1.marks);

    // Input details for second student
    printf("Enter details of Student2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll_no, &s2.marks);

    // Compare both students
    if(strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
