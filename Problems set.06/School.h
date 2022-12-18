//
// Created by mr hendy on 12/18/2022.
//

#ifndef SCHOOL_H
#define SCHOOL_H

#include "stdio.h"

#define ADMIN 9999
#define ClassSize 10
#define SubjectNum 4

char *Subjects[] = {"Programming", "Data Structures", "Discrete Math", "Algorithms"};

typedef struct subject {
    int degree;
    char *name[ClassSize];
} Subject;
typedef struct student {
    long id;
    Subject subjects[SubjectNum];
} Student;

////Random degrees for one student
void Random(Student *st);

////Display Student with its Data
void Display(Student *st);

////Display all Students in the class
void DisplayClass(Student *);

////Gives IDs for all Students in the class
void giveIDs(Student *);

////Randomising Data all Students in the class
void RandomClass(Student *class);

////Editing with Admin Permission
void AdminEdit(Student *ps, int index);

////Search the Student with ID and Gets its order
int findByID(Student *st, long id);

void Random(Student *st) {
    for (int i = 0; i < SubjectNum; i++) {
        (*st).subjects[i].degree = (int) (rand() % 100);
    }
}

void RandomClass(Student *class) {
    for (int i = 0; i < ClassSize; i++) {
        Random(class + i);
    }
}

void giveIDs(Student *class) {
    for (int i = 0; i < ClassSize; i++) {
        class[i].id = 1000 + i;
    }
}


void Display(Student *st) {
    for (int i = 0; i < SubjectNum; i++) {
        printf("%s  ", Subjects[i]);
        printf(" %d\n", st->subjects[i].degree);
    }
    printf("\n");
}

int findByID(Student *st, long id) {
    for (int i = 0; i < ClassSize; i++) {
        if (id == (st + i)->id) {
            return i;
        }
    }
}

void AdminEdit(Student *ps, int index) {
    printf("Enter Number \n");
    for (int i = 0; i < SubjectNum; i++) {
        printf("%d %s  \n", i + 1, Subjects[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int degree = 0;
    switch (x) {
        case 1:
            printf("Enter Degree to Edit\n");
            scanf("%d", &degree);
            (ps + index)->subjects[x - 1].degree = degree;
            Display((ps + index));
            break;
        case 2:
            printf("Enter Degree to Edit\n");
            scanf("%d", &degree);
            (ps + index)->subjects[x - 1].degree = degree;
            Display((ps + index));
            break;
        case 3:
            printf("Enter Degree to Edit\n");
            scanf("%d", &degree);
            (ps + index)->subjects[x - 1].degree = degree;
            Display((ps + index));
            break;
        case 4:
            printf("Enter Degree to Edit\n");
            scanf("%d", &degree);
            (ps + index)->subjects[x - 1].degree = degree;
            Display((ps + index));
            break;
        default:
            printf("Enter Valid Number\n");
    }
}

void DisplayClass(Student *class) {
    for (int i = 0; i < ClassSize; i++) {
        printf("ID = %ld    \n", (class + i)->id);
        Display(class + i);
        printf("-------------------------------------\n");
    }
}
#endif //UNTITLED10_SCHOOL_H
