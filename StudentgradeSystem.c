#include <stdio.h>

// Function to calculate grade based on percentage
char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    char name[50];
    int rollNo;
    float marks[5], total = 0, percentage;
    char grade;

    // Input student details
    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    // Input marks for each subject
    printf("Enter marks for English: ");
    scanf("%f", &marks[0]);

    printf("Enter marks for Hindi: ");
    scanf("%f", &marks[1]);

    printf("Enter marks for Maths: ");
    scanf("%f", &marks[2]);

    printf("Enter marks for Science: ");
    scanf("%f", &marks[3]);

    printf("Enter marks for SST (Social Science): ");
    scanf("%f", &marks[4]);

    // Calculate total marks
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Calculate grade
    grade = calculateGrade(percentage);

    // Display the grade card
    printf("\n--- Grade Card ---\n");
    printf("Name: %s", name);
    printf("Roll No: %d\n", rollNo);
    printf("Total Marks: %.2f/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
