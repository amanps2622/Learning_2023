#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[100], targetFileName[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 0;
    }

    printf("Enter the target file name: ");
    scanf("%s", targetFileName);

    // Open the target file in write mode
    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL) {
        printf("Unable to create the target file.\n");
        fclose(sourceFile);
        return 0;
    }

    // Copy the contents of the source file to the target file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}