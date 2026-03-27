#include "student.h"

void searchRecord()
{
    FILE *fptr;
    struct student_db s;
    int id, found = 0;
    char input[MAX_INPUT];

    fptr = fopen("student.txt", "r");

    if (fptr == NULL)
    {
        printf("\nNo records found. Database is empty.\n");
        return;
    }

    printf("Enter student ID to search: ");
    fgets(input, MAX_INPUT, stdin);
    id = atoi(input);

    if (id <= 0)
    {
        printf("Error: Invalid ID!\n");
        fclose(fptr);
        return;
    }

    printf("\n\tSTUDENT DETAILS\n");
    printf("=================================================\n");
    printf("ID\tNAME\t\t\tAGE\tMARKS\n");
    printf("=================================================\n");

    while (fscanf(fptr, "%d %49s %d %f", &s.id, s.name, &s.age, &s.marks) == 4)
    {
        if (s.id == id)
        {
            printf("%-5d %-20s %-8d %.2f\n", s.id, s.name, s.age, s.marks);
            found = 1;
            break;
        }
    }

    fclose(fptr);

    if (!found)
    {
        printf("\nRecord with ID %d not found!\n", id);
    }
    else
    {
        printf("=================================================\n");
    }
}