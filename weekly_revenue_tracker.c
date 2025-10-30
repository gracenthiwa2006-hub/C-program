/*
Name: Grace Mwikali
Reg no:CT100/G/26265/25
Description:1D Array for storing weekly revenues
*/

#include <stdio.h>

int main() {
    float revenue[7];          
    float total = 0, average;
    int i;

    //Prompt the user to input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  
    }

    // Calculate average revenue
    average = total / 7;

    //Prompt the user to display the results
    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
