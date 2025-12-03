#include <stdio.h>

int main() {
    char filename[100];
    char newLine[200];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // consume newline left by scanf
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, fp);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
