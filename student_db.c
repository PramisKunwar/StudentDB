#include<stdio.h>
struct detail
{
    char name[50];
    int age;
} s[10];

int main()
{
    printf("Enter name ");
    scanf("%s",s[1].name);

    printf("Enter your age ");
    scanf("%d",&s[1].age);

    printf("\nUserName\tAge\n");
    printf("\n=====================\n");
    printf("%s \t\t %d", s[1].name,s[1].age);
}

