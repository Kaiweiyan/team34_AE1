#include "sset_ls.h"

void sset_init(StudentSet *set){
    set->size = 0;
    return;
}

void sset_destroy(StudentSet *set){
    free(set);
    return;
}

bool sset_insert(StudentSet *set, const char *value){
    for (int i = 0; i < set->size; i++)
        if (strcmp(value, set->name[i]) == 0)
            return false;
    strcpy(set->name[set->size++], value);
    return true;
}

bool sset_remove(StudentSet *set, const char *value){
    for (int i = 0; i < set->size; i++){
        if (strcmp(value, set->name[i]) == 0){
            for (int j = i; j < set->size-1; j++)
                strcpy(set->name[j], set->name[j+1]);
            set->name[set->size][0] = '\0';
            set->size--;
            return true;
        }
    }
    return false;
}

bool sset_contains(const StudentSet *set, const char *value){
    for (int i = 0; i < set->size; i++)
        if (strcmp(value, set->name[i]) == 0)
            return true;
    return false;
}

