#include "student.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT DATABASE =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addRecord(); break;
            case 2: displayRecord(); break;
            case 3: searchRecord(); break;
            case 4: updateRecord(); break;
            case 5: deleteRecord(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}