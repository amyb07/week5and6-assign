#ifndef VECTOR_H
#define VECTOR_H

//typedef struct vector(int allocated, int used, int *mem);
typedef struct vector *Vector;
struct vector{
    int allocated; //how man spots
    int used; //how many used
    int *mem; //pointer to data in memory
};
Vector vectorNew(int size);
void vectorDelete(Vector vector);
void vectorPush(Vector *vector, int value);
void vectorResize(Vector *vector, int addSize);
void vectorStatus(Vector vector);
void vectorPop(Vector v);
int vectorGet(Vector vector, int index);
int vectorSet(Vector vector, int index, int value);
int vectorLen(Vector vector);

#endif

