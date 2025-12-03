#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char buffer[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
