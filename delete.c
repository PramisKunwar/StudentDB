#include "student.h"

void deleteRecord()
{
    FILE *fptr,*temp;
    struct student_db s;
    int id,found=0;

    fptr=fopen("student.txt","r");
    temp=fopen("temp.txt","w");

    printf("Enter student id to delete: ");
    scanf("%d",&id);

    while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
    {
        if(s.id==id)
        {
            found=1;
            continue;
        }

        fprintf(temp,"%d %s %d %f\n",s.id,s.name,s.age,s.marks);
    }

    fclose(fptr);
    fclose(temp);

    remove("student.txt");
    rename("temp.txt","student.txt");

    if(found)
        printf("Record deleted successfully\n");
    else
        printf("Record not found\n");
}