#include "student.h"

void updateRecord()
{
    FILE *fptr, *temp;
    struct student_db s;
    int id, found = 0;
    char input[MAX_INPUT];
    int valid;

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

    printf("Enter student ID to update: ");
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
            printf("\n--- Updating Record (ID: %d) ---\n", s.id);
            printf("Current Name: %s\n", s.name);
            printf("Current Age: %d\n", s.age);
            printf("Current Marks: %.2f\n", s.marks);
            printf("--------------------------------\n");

            do
            {
                valid = 1;
                printf("Enter new name: ");
                fgets(input, MAX_INPUT, stdin);
                input[strcspn(input, "\n")] = 0;

                for (int i = 0; input[i] != '\0'; i++)
                {
                    if (!((input[i] >= 'a' && input[i] <= 'z') ||
                          (input[i] >= 'A' && input[i] <= 'Z') ||
                          input[i] == ' '))
                    {
                        valid = 0;
                        printf("Error: Name should contain only letters and spaces!\n");
                        break;
                    }
                }

                if (strlen(input) == 0)
                {
                    valid = 0;
                    printf("Error: Name cannot be empty!\n");
                }
            } while (!valid);

            strcpy(s.name, input);

            do
            {
                printf("Enter new age: ");
                fgets(input, MAX_INPUT, stdin);
                s.age = atoi(input);

                if (s.age < 1 || s.age > 120)
                    printf("Error: Age must be between 1 and 120!\n");
            } while (s.age < 1 || s.age > 120);

            do
            {
                printf("Enter new marks: ");
                fgets(input, MAX_INPUT, stdin);
                s.marks = atof(input);

                if (s.marks < 0 || s.marks > 100)
                    printf("Error: Marks must be between 0 and 100!\n");
            } while (s.marks < 0 || s.marks > 100);
        }

        fprintf(temp, "%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
    }

    fclose(fptr);
    fclose(temp);

    if (found)
    {
        if (remove("student.txt") == 0 && rename("temp.txt", "student.txt") == 0)
        {
            printf("\nRecord updated successfully!\n");
        }
        else
        {
            printf("\nError: Failed to update record!\n");
        }
    }
    else
    {
        remove("temp.txt");
        printf("\nRecord with ID %d not found!\n", id);
    }
}