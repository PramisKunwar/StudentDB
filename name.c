// Program that reads different names and address into the computer and 
// sorts the name into alphabetical order using structure

#include<stdio.h>
#include<string.h>

struct info{
    char name[50],add[50];
}s[50],t;

int main()
{
    int n,i,j;
    printf("Enter how many details you wanna submit ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter person %d name ",i+1);
        scanf("%s",s[i].name);
        printf("Enter person %d address ",i+1);
        scanf("%s",s[i].add);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j].name,s[j+1].name)>0)
            {
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }

    printf("\n\tDETAILS:");
    printf("\n\t===============\n");
    printf("\tNAME\t\tADDRESS\t\n");
    for(i=0;i<n;i++)
    {
        printf("\t%s\t\t%s\n",s[i].name,s[i].add);
    }

}