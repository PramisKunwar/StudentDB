// Terminal Student Database
/*Features:
Add student: id, name, age, marks
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
}s[50];

int main()
{
    char ans[10];
    int i=0,n=0;
    do {
    printf("Enter student id ");
    scanf("%d",&s[i].id);
    printf("Enter student name ");
    scanf("%s",s[i].name);
    printf("Enter student age ");
    scanf("%d",&s[i].age);
    printf("Enter student marks ");
    scanf("%f",&s[i].marks);
    printf("\nDo you want to add records? (Y/N)\n");
    scanf("%s",ans);
    i=i+1; 
    n=n+1;
    } while (strcmp(ans, "y") == 0 || strcmp(ans, "Y") == 0);


    FILE *fptr;
    fptr = fopen("student.txt","w");
    fprintf(fptr,"\n\tSTUDENT DETAILS");
    fprintf(fptr,"\n=================================================\n");
    fprintf(fptr,"ID\t\tNAME\t\tAGE\t\tMARKS\n");
    for(i=0;i<n;i++)
    {
    fprintf(fptr,"%d\t\t%s\t\t%d\t\t%f\n",s[i].id,s[i].name,s[i].age,s[i].marks);
    }

    fclose(fptr);
    return 0;
}

