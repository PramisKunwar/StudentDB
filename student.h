#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<string.h>

struct student_db
{
    int id, age;
    float marks;
    char name[50];
};

void addRecord();
void displayRecord();
void searchRecord();
void updateRecord();
void deleteRecord();

#endif