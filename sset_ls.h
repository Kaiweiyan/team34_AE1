#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#ifndef SSET_H
#define SSET_H

#define MAX_STUDENT 1000
#define NAME_LENGTH 15+1

typedef struct StudentSet StudentSet;
struct StudentSet {
    /* define any field you need here */
    char name[MAX_STUDENT][NAME_LENGTH];
    int size;
};

void sset_init(StudentSet *set);
void sset_destroy(StudentSet *set);
bool sset_insert(StudentSet *set, const char *value);   // return true if the insertion is successful, false otherwise
bool sset_remove(StudentSet *set, const char *value);   // return true if the removal is successful, false otherwise
bool sset_contains(const StudentSet *set, const char *value);

#endif