#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if(src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if(dest == NULL) {
        printf("Error creating destination file!\n");
        fclose(src);
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
