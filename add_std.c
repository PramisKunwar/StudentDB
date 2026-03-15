// Terminal Student Database
/*Features:
Add student: id, name, age, marks
Display all students
Search student
Update Student
Delete student
Save to file
*/ 

#include<stdio.h>
#include<string.h>

struct student_db
{
    int id,age;
    float marks;
    char name[50];
};

void addRecord();
void displayRecord();
void searchRecord();
void updateRecord();
void deleteRecord();

int main()
{
    int choice;

    printf("1. Add Records\n");
    printf("2. Display Records\n");
    printf("3. Search Records\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==1)
        addRecord();
    else if(choice==2)
        displayRecord();
    else if(choice==3)
        searchRecord();
    else
        printf("Invalid choice");

    return 0;
}

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
    printf("ID\tNAME\t\tAGE\t\tMARKS\n");

    while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n",s.id,s.name,s.age,s.marks);
    }

    fclose(fptr);
}

    void searchRecord()
    {
        FILE *fptr;
    struct student_db s;

    fptr = fopen("student.txt","r");

    if(fptr==NULL)
    {
        printf("File not found\n");
        return;
    }
    int id;
    printf("Enter student id to search ");
    scanf("%d",&id);

    printf("\n\tSTUDENT DETAILS");
    printf("\n=================================================\n");
    printf("ID\tNAME\t\tAGE\t\tMARKS\n");

    while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
    {
        if(s.id == id)
        {
        printf("%d\t%s\t\t%d\t\t%.2f\n",s.id,s.name,s.age,s.marks);
        }
    }
    

    fclose(fptr);
    }

    void updateRecord()
    {
        FILE *fptr;
        FILE *temp;
    struct student_db s;
    fptr = fopen("student.txt","r");
    temp = fopen("student.txt","w");

    int id,found=0;
    printf("Enter student id to update ");
    scanf("%d",&id);

     while(fscanf(fptr,"%d %s %d %f",&s.id,s.name,&s.age,&s.marks)!=EOF)
     {
        if(s.id == id)
        {
        found = 1;
        printf("Enter student id: ");
        scanf("%d",&s.id);

        printf("Enter student name: ");
        scanf("%s",s.name);

        printf("Enter student age: ");
        scanf("%d",&s.age);

        printf("Enter student marks: ");
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