#include <stdio.h>


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

  
    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

   
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

   
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }

    
    percentage = (total / 500) * 100;

   
    grade = calculateGrade(percentage);


    printf("\n--- Grade Card ---\n");
    printf("Name: %s", name);
    printf("Roll No: %d\n", rollNo);
    printf("Total Marks: %.2f/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
