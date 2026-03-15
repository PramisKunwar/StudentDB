#include "student.h"

void addRecord()
{
    FILE *fptr;
    struct student_db s;
    char ans;

    fptr = fopen("student.txt","a");

    do{
        printf("Enter student id: ");
        scanf("%d",&s.id);

        printf("Enter student name: ");
        scanf("%s",s.name);

        printf("Enter student age: ");
        scanf("%d",&s.age);

        printf("Enter student marks: ");
        scanf("%f",&s.marks);

        fprintf(fptr,"%d %s %d %f\n",s.id,s.name,s.age,s.marks);

        printf("Add another record? (Y/N): ");
        scanf(" %c",&ans);

    }while(ans=='y' || ans=='Y');

    fclose(fptr);
}