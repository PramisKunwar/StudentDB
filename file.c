// Program to store std-no,name and marks of n students in a data file.
// and display the records in appropriate format reading from the file.

#include<stdio.h>

struct file
{
    int std_no,marks;
    char name[50];
}s[50];

int main()
{
    int n,i;
    printf("How many students do you want to enter?\t");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter student %d no\t",i+1);
        scanf("%d",&s[i].std_no);
        printf("\nEnter student %d name\t",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter student %d marks\t",i+1);
        scanf("%d",&s[i].marks); 
    }

    printf("\n\t\tSTUDENT DETAILS:");
    printf("\nSN\t\tNAME\t\tMARKS");
    printf("\n=====================================\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\n",s[i].std_no,s[i].name,s[i].marks);
    }
}