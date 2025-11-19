#include <stdio.h>
#include<string.h>

int main() {
    char names[5][20];
    int marks[5];
    int i, highestIndex = 0, highest;
    float sum = 0, average;

    
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0; // remove newline

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
        getchar(); // consume leftover newline from scanf
    }

   
    highest = marks[0];
    for(i = 1; i < 5; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
            highestIndex = i;
        }
    }

   
    for(i = 0; i < 5; i++) {
        sum += marks[i];
    }
    average = sum / 5.0;

    printf("Student Marks:\n");
    printf("Name\t\t\tMarks\n");
    printf("----------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t\t%d\n",names[i],marks[i]);
    }
    
    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], highest);
    printf("Class Average: %.2f\n", average);

    return 0;
}
