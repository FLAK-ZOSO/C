#ifndef DYNARR_H
#define DYNARR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int size;
	int realSize;
	int* arr;
} Array;

void reallocate(Array *array);
void construct(Array *array, int N);
void assign(Array *array, int N, int value);
void resize(Array *array, int N, int value);
void push_back(Array *array, int value);
void deconstruct(Array *array);

#endif
