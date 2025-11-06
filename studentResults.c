/*
Name:Grace Mwikali 
Reg no:CT100/G/26265/25
Description:A c program reads student data from results.dat(binary file)
*/

#include <stdio.h>
#include <stdlib.h>

// Define structure to hold student information 
struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int choice;

    printf("1. Enter student records\n");
    printf("2. Display all student records\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); 

    if (choice == 1) {
        // Writing records into binary file
        fp = fopen("results.dat", "ab"); 
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }

        char more = 'y';
        while (more == 'y' || more == 'Y') {
            printf("Enter student name: ");
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = '\0'; 

            printf("Enter registration number: ");
            fgets(s.regNo, sizeof(s.regNo), stdin);
            s.regNo[strcspn(s.regNo, "\n")] = '\0';

            printf("Enter total marks: ");
            scanf("%f", &s.marks);
            getchar();

            fwrite(&s, sizeof(struct Student), 1, fp);
            printf("Record saved successfully!\n");

            printf("Add another record? (y/n): ");
            scanf(" %c", &more);
            getchar();
        }

        fclose(fp);
        printf("All records have been stored in results.dat\n");
    }

    else if (choice == 2) {
        // Reading and displaying records
        fp = fopen("results.dat", "rb");
        if (fp == NULL) {
            printf("Error opening file or no records found!\n");
            return 1;
        }

        printf("\n%-20s %-20s %-10s\n", "Name", "Registration No", "Marks");
        printf("----------------------------------------------------------\n");

        while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
            printf("%-20s %-20s %-10.2f\n", s.name, s.regNo, s.marks);
        }

        fclose(fp);
        printf("\nAll records displayed successfully.\n");
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}