#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 49
#define MAX_INPUT 100

struct student_db
{
    int id, age;
    float marks;
    char name[MAX_NAME + 1];
};

void addRecord();
void displayRecord();
void searchRecord();
void updateRecord();
void deleteRecord();

#endif