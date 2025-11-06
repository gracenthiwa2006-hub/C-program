/*
Name:Grace Mwikali 
Reg no:CT100/G/26265/25
Description:A c program that stores borrowed book tittles in borrowed_books.txt
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter the book title: ");
        fgets(title, sizeof(title), stdin);

        // Write title to file
        fprintf(fp, "%s", title);

        printf("Book title successfully stored!\n");

        printf("Do you want to add another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); 
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All titles saved in borrowed_books.txt\n");

    return 0;
}