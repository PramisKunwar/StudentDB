#include "student.h"

void addRecord()
{
    FILE *fptr;
    struct student_db s;
    char ans;
    int lastId = 0;
    char input[MAX_INPUT];
    int valid;

    fptr = fopen("student.txt", "r");
    if (fptr != NULL)
    {
        while (fscanf(fptr, "%d %49s %d %f", &s.id, s.name, &s.age, &s.marks) == 4)
        {
            if (s.id > lastId)
                lastId = s.id;
        }
        fclose(fptr);
    }

    fptr = fopen("student.txt", "a");
    if (fptr == NULL)
    {
        printf("Error: Cannot open file!\n");
        return;
    }

    do
    {
        lastId++;
        s.id = lastId;
        printf("\n--- New Record (ID: %d) ---\n", s.id);

        do
        {
            valid = 1;
            printf("Enter student name: ");
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
            printf("Enter student age: ");
            fgets(input, MAX_INPUT, stdin);
            s.age = atoi(input);

            if (s.age < 1 || s.age > 120)
                printf("Error: Age must be between 1 and 120!\n");
        } while (s.age < 1 || s.age > 120);

        do
        {
            printf("Enter student marks: ");
            fgets(input, MAX_INPUT, stdin);
            s.marks = atof(input);

            if (s.marks < 0 || s.marks > 100)
                printf("Error: Marks must be between 0 and 100!\n");
        } while (s.marks < 0 || s.marks > 100);

        fprintf(fptr, "%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
        printf("\nRecord added successfully! (ID: %d)\n", s.id);

        do
        {
            printf("Add another record? (Y/N): ");
            fgets(input, MAX_INPUT, stdin);
            ans = input[0];
        } while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');

    } while (ans == 'y' || ans == 'Y');

    fclose(fptr);
}