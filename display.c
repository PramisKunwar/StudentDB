#include "student.h"

void displayRecord()
{
    FILE *fptr;
    struct student_db s;
    int count = 0;

    fptr = fopen("student.txt", "r");

    if (fptr == NULL)
    {
        printf("\nNo records found. Database is empty.\n");
        return;
    }

    printf("\n\tSTUDENT DETAILS\n");
    printf("=================================================\n");
    printf("ID\tNAME\t\tAGE\tMARKS\n");
    printf("=================================================\n");

    while (fscanf(fptr, "%d %49s %d %f", &s.id, s.name, &s.age, &s.marks) == 4)
    {
        printf("%-5d %-18s %-8d %.2f\n", s.id, s.name, s.age, s.marks);
        count++;
    }

    fclose(fptr);

    if (count == 0)
    {
        printf("\nNo records found in database.\n");
    }
    else
    {
        printf("=================================================\n");
        printf("Total records: %d\n", count);
    }
}