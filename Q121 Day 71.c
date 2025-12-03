#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s, Age: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
