// Program to create a data file "student.dat" then store name and marks of n students in the data file.

#include<stdio.h>
int main()
{
    char name[50];
    int marks,i,n;

    printf("Enter number of students ");
    scanf("%d",&n);

    FILE *fptr;
    fptr = (fopen("C:\\student.dat","w"));

    for(i=0;i<n;i++)
    {
        printf("Enter name ");
        scanf("%s",name);
        printf("Enter marks ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks: %d \n",name,marks);
    }
    fclose(fptr);
    return 0;
}