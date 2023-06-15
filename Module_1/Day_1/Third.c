#include <stdio.h>

float calculate_percentage(int total_marks) {
    int max_marks = 300; // Assuming each subject has a maximum of 100 marks
    return ((float)total_marks / max_marks) * 100;
}

void print_summary(int roll_no, char* name, int physics_marks, int math_marks, int chemistry_marks) {
    int total_marks = physics_marks + math_marks + chemistry_marks;
    float percentage = calculate_percentage(total_marks);

    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics_marks);
    printf("Math Marks: %d\n", math_marks);
    printf("Chemistry Marks: %d\n", chemistry_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f\n", percentage);
}

int main() {
    int roll_no, physics_marks, math_marks, chemistry_marks;
    char name[50];

    // Read student details from the user
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Physics Marks: ");
    scanf("%d", &physics_marks);
    printf("Enter Math Marks: ");
    scanf("%d", &math_marks);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistry_marks);

    // Print the summary
    print_summary(roll_no, name, physics_marks, math_marks, chemistry_marks);

    return 0;
}