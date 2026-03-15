#include "student.h"

void updateRecord()
{
    FILE *fptr,*temp;
    struct student_db s;
    int id,found=0;

    fptr=fopen("student.txt","r");
    temp=fopen("temp.txt","w");

    printf("Enter student id to update: ");
    scanf("%d",&id);

    while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
    {
        if(s.id==id)
        {
            found=1;

            printf("Enter new name: ");
            scanf("%s",s.name);

            printf("Enter new age: ");
            scanf("%d",&s.age);

            printf("Enter new marks: ");
            scanf("%f",&s.marks);
        }

        fprintf(temp,"%d %s %d %f\n",s.id,s.name,s.age,s.marks);
    }

    fclose(fptr);
    fclose(temp);

    remove("student.txt");
    rename("temp.txt","student.txt");

    if(found)
        printf("Record updated successfully\n");
    else
        printf("Record not found\n");
}