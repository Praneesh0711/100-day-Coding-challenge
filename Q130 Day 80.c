#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    // Writing student records to file
    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Example: storing two records (can be extended)
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    fclose(fp);

    // Reading student records from file
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
