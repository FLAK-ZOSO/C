#include "dynarr.h"

int main() {
	Array arr;
	construct(&arr, 0);
	push_back(&arr, 10);
	push_back(&arr, -7);
	push_back(&arr, -9);
	push_back(&arr, 5);
	push_back(&arr, 23);
	push_back(&arr, 42);
	push_back(&arr, -8);
	for (int i = 0; i < arr.size; i++) {
		printf("%d ", arr.arr[i]);
	}
	printf("\n");
	assign(&arr, 10, -20);
	for (int i = 0; i < arr.size; i++) {
		printf("%d ", arr.arr[i]);
	}
	printf("\n");
	deconstruct(&arr);
}
