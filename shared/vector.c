#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

Vector vectorNew(int size){
    Vector v;
    v = malloc(sizeof(struct vector));
    v -> mem = malloc(size * sizeof(int));
    v -> allocated = size;
    v -> used = 0;
    return v;

}

void vectorDelete(Vector vector){
    free(vector -> mem);
    free(vector);
}

void vectorPush(Vector *vector, int value){
    if ((*vector) -> used == (*vector) -> allocated){
        vectorResize(vector, (*vector) -> allocated);
    }
    (*vector) -> mem[(*vector) -> used] = value;
    (*vector) -> used++;
}

void vectorResize(Vector *vector, int addSize){
    int *newMem;
    int i;
    newMem = malloc(((*vector) -> allocated + addSize) * sizeof(int));
    for(i = 0; i < (*vector) -> used; i++){
        newMem[i] = (*vector) -> mem[i];
    }
    free((*vector) -> mem);
    (*vector) -> mem = newMem;
    (*vector) -> allocated = (*vector) -> allocated + addSize;
}

void vectorStatus(Vector vector){
    printf("Allocated: %d\n", vector -> allocated);
    printf("Used: %d\n", vector -> used);
}

void vectorPop(Vector vector){
    vector -> used--;
}

int vectorGet(Vector vector, int index){
    return vector -> mem[index];
}

int vectorSet(Vector vector, int index, int value){
    vector -> mem[index] = value;
}

int vectorLen(Vector vector){
    return vector -> used;
}