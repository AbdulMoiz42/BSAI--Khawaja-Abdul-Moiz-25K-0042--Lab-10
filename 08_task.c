#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char items[3][3][30] = {
        {"Spring Rolls", "Dynamite Chicken", "prawns with fries"},
        {"Grilled Chicken", "Pasta Alfredo", "Steak"},
        {"Ice Cream", "pancake", "Brownie"}
    };
    float prices[3][3] = {
        {5.5, 6.0, 7.25},
        {12.0, 11.5, 15.0},
        {4.5, 6.75, 5.0}
    };

    int i, j;

    printf("----- Digital Restaurant Menu -----\n\n");

    for(i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        printf("---------------------------\n");
        printf("%-20s %s\n", "Item", "Price($)");
        for(j = 0; j < 3; j++) {
            printf("%-20s %.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }

    printf("Items cheaper than $10:\n");
    printf("-----------------------\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(prices[i][j] < 10.0) {
                printf("%-20s (%s)\n", items[i][j], categories[i]);
            }
        }
    }

    return 0;
}
