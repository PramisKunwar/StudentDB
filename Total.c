// Program to input data for students then 
// display their info and find the total marks of each student
#include<stdio.h>
struct student
{
    char name[25];
    int age,total,marks[3];
};

int main()
{
    struct student s[2];
    int i,j;

    printf("Student Records \n");

    for(i=0;i<2;i++)
    {
        printf("Enter student no %d name ",i+1);
        scanf("%s",s[i].name);
        printf("Enter student no %d age ",i+1);
        scanf("%d",&s[i].age);
        printf("Enter student no %d marks in 3 subjects \n",i+1);

        for(j=0;j<3;j++)
        {
            printf("subject %d ", j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }

    for(i=0;i<2;i++)
    {
        s[i].total = 0;
        for(j=0;j<3;j++)
        {
            s[i].total = s[i].total + s[i].marks[j];
        }
    }

    for(i=0;i<2;i++)
    {
        printf("\n Students Record \n");
        printf("\n ========================== \n");
        printf("\n Student's Name - %s ",s[i].name);
        printf("\n Student's Age - %d ",s[i].age);
        printf("\n Student's Total marks - %d \n",s[i].total);  
    }
    return 0;
}