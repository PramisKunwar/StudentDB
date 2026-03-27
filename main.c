#include "student.h"

int main()
{
    int choice;
    char input[MAX_INPUT];

    printf("\n=== WELCOME TO STUDENT DATABASE SYSTEM ===\n");

    while (1)
    {
        printf("\n===== MAIN MENU =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("=====================\n");
        printf("Enter your choice: ");

        fgets(input, MAX_INPUT, stdin);
        choice = atoi(input);

        switch (choice)
        {
        case 1:
            addRecord();
            break;
        case 2:
            displayRecord();
            break;
        case 3:
            searchRecord();
            break;
        case 4:
            updateRecord();
            break;
        case 5:
            deleteRecord();
            break;
        case 6:
            printf("\nThank you for using Student Database System!\n");
            printf("Goodbye!\n\n");
            return 0;
        default:
            printf("Invalid choice! Please enter a number between 1-6.\n");
        }
    }
}