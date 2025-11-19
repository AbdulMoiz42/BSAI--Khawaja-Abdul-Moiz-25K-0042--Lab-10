#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];  // larger size for full names
    int marks[5];
    int i, highestIndex = 0, highest;
    float sum = 0, average;

    // Input student names and marks
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0; // remove newline

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
        getchar(); // clear leftover newline from input buffer
    }

    // Display table
    printf("\n%-20s %s\n", "Student Name", "Marks");
    printf("------------------------------\n");
    for(i = 0; i < 5; i++) {
        printf("%-20s %d\n", names[i], marks[i]);
    }

    // Find top student
    highest = marks[0];
    for(i = 1; i < 5; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
            highestIndex = i;
        }
    }

    // Calculate average
    for(i = 0; i < 5; i++) {
        sum += marks[i];
    }
    average = sum / 5.0;

    // Display top student and average
    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], marks[highestIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}
