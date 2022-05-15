#include "dynarr.h"

void reallocate(Array *array) {
	int *prevPtr = array->arr;
	int *newPtr = (int*)malloc((array->realSize + 1) * 2 * sizeof(int));
	memcpy(newPtr, prevPtr, array->realSize * sizeof(int));
	free(prevPtr);
	array->arr = newPtr;
	array->realSize = (array->realSize + 1) * 2;
}
void construct(Array *array, int N) {
	array->size = N;
	array->realSize = (N * 2) + 1;
	array->arr = (int*)malloc(array->realSize * sizeof(int));
	memset(array->arr, 0, array->realSize * sizeof(int));
}
void assign(Array *array, int N, int value) {
	if (array->arr != NULL) {
		free(array->arr);
	}
	construct(array, N);
	for (int i = 0; i < N; i++) {
		array->arr[i] = value;
	}
}
void resize(Array *array, int N, int value) {
	free(array->arr);
	construct(array, N);
}

void push_back(Array *array, int value) {
	if (array->size >= array->realSize - 1) {
		reallocate(array);
	}

	array->arr[array->size] = value;
	array->size++;
}
void deconstruct(Array *array) {
	free(array->arr);
}
