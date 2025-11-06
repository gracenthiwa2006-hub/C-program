/*
Name:Grace Mwikali
Reg no:CT100/G/26265/25
Description:A c program that reads all sales from sales.txt, calculates total and displays it 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;
    int count = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open sales.txt file.\n");
        printf("Make sure the file exists in the same folder as this program.\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No transactions found in sales.txt.\n");
    } else {
        printf("Total number of transactions: %d\n", count);
        printf("Total sales for the day: $%.2f\n", total);
    }

    return 0;
}