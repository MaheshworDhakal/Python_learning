#include <stdio.h>

int main() {
    int marks[7], totalMarks = 0;
    float percentage;

    // Input marks for 7 subjects
    printf("Enter the marks for 7 subjects:\n");
    for (int i = 0; i < 7; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate percentage
    percentage = (float) totalMarks / 7;

    // Display the percentage
    printf("\nTotal Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    // Display division based on percentage
    if (percentage >= 80) {
        printf("First Division\n");
    } else if (percentage >= 60) {
        printf("Second Division\n");
    } else if (percentage >= 40) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}

