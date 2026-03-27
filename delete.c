#include "student.h"

void deleteRecord()
{
    FILE *fptr, *temp;
    struct student_db s;
    int id, found = 0;
    char input[MAX_INPUT];

    fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("\nNo records found. Database is empty.\n");
        return;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Error: Cannot create temporary file!\n");
        fclose(fptr);
        return;
    }

    printf("Enter student ID to delete: ");
    fgets(input, MAX_INPUT, stdin);
    id = atoi(input);

    if (id <= 0)
    {
        printf("Error: Invalid ID!\n");
        fclose(fptr);
        fclose(temp);
        remove("temp.txt");
        return;
    }

    while (fscanf(fptr, "%d %49s %d %f", &s.id, s.name, &s.age, &s.marks) == 4)
    {
        if (s.id == id)
        {
            found = 1;
            printf("\nDeleting record with ID: %d\n", s.id);
            printf("Name: %s, Age: %d, Marks: %.2f\n", s.name, s.age, s.marks);
            continue; // Skip writing this record
        }

        fprintf(temp, "%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
    }

    fclose(fptr);
    fclose(temp);

    if (found)
    {
        if (remove("student.txt") == 0 && rename("temp.txt", "student.txt") == 0)
        {
            printf("\nRecord deleted successfully!\n");
        }
        else
        {
            printf("\nError: Failed to delete record!\n");
        }
    }
    else
    {
        remove("temp.txt");
        printf("\nRecord with ID %d not found!\n", id);
    }
}