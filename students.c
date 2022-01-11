#include <stdio.h>
#include "student.h"


int oldest(struct Student array[]) { // Returns the position of the oldest
	int size = sizeof(array)/sizeof(array[0]);
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (array[i].age > array[max].age)
			max = i;
	}
	return max;
}


main() {
	unsigned int n = 15;
	struct Student class_[n];
	
	// class_ check
	printf("%d \n", sizeof(class_));
	printf("%d \n", sizeof(class_[0]));
	printf("%d \n", sizeof(class_)/sizeof(class_[0]));
	
	for (int i = 0; i < n; i++) {
		scanf("\n", &class_[i].age);
		printf("%d \n", class_[i].age);
	}
	
	for (int i = 0; i < n; i++) {
		scanf("\n", &class_[i].name);
		printf(class_[i].name);		
	}
	
	for (int i = 0; i < n; i++) {
		scanf(&class_[i].surname);
		printf(class_[i].surname);
	}
	
	printf(oldest(class_));
	
	return 0;
}