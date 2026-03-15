#include "student.h"

void displayRecord()
{
    FILE *fptr;
    struct student_db s;

    fptr = fopen("student.txt","r");

    if(fptr==NULL)
    {
        printf("File not found\n");
        return;
    }

    printf("\n\tSTUDENT DETAILS");
    printf("\n=================================================\n");
    printf("ID\tNAME\t\t\tAGE\t\tMARKS\n");

    while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
    {
        printf("%d\t%s\t\t\t%d\t\t%.2f\n",s.id,s.name,s.age,s.marks);
    }

    fclose(fptr);
}