#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    // Allocate memory dynamically for a student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if(s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details using pointer and -> operator
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%d", &s->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
