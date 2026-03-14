/* Program to enter student's info such as roll_no, name and marks then sort 
the marks in descending order and display info in suitable format using structure. */
#include<stdio.h>
    struct student
    {
        int roll_no,marks;
        char name[25];
    };

    struct student stud[100],t;

int main()
{
    int i,j,n;
    printf("Enter how many student ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d no student as roll_no, name & marks ",i+1);
        scanf("%d %s %s",&stud[i].roll_no,stud[i].name,&stud[i].marks);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].marks<stud[j+1].marks)
            {
                t = stud[j];
                stud[j] = stud[j+1];
                stud[j+1] = t;
            }
        }
    }

    printf("\n Student info in descending order \n");
    printf("\nROLL_NO\t\tNAME\t\tMARKS\n");
    printf("---------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t\t\t%s\t\t\t%d\n", stud[i].roll_no,stud[i].name,stud[i].marks);
    }
    return 0;
}