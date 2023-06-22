#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Comparison function for qsort
int compare(const void* a, const void* b) {
    const struct Student* s1 = (const struct Student*)a;
    const struct Student* s2 = (const struct Student*)b;
    
    // Sort in descending order based on marks
    if (s1->marks < s2->marks) {
        return 1;
    } else if (s1->marks > s2->marks) {
        return -1;
    }
    
    return 0;
}

void sortArray(struct Student* students, int size) {
    // Sort the array of structures using qsort
    qsort(students, size, sizeof(struct Student), compare);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    // Initialize the array of structures
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }

    // Sort the array of structures in descending order based on marks
    sortArray(students, size);

    // Display the sorted array of structures
    printf("\nSorted Array of Structures (Descending order based on marks):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}