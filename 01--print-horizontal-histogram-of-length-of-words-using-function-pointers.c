#include <stdio.h>

// Function prototypes
void bubbleSort(int a[], int size, int (*compare)(int, int));
void swap(int *a, int *b);
int ascending(int a, int b);
int descending(int a, int b);

int main() {
	int a[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int size = 10;
	int choice;

	printf("Chooses whether to sort the array in ascending(1) or descending (2) order\n");
	scanf("%d", &choice);

	if (choice == 1) {
		bubbleSort(a, size, ascending);
	} else {
		bubbleSort(a, size, descending);

	}


	printf("Default array: 2, 6, 4, 8, 10, 12, 89, 68, 45, 37\n");   // display the original and sorted array
	printf("Sorted array: ");
	for (int i = 0; i < (size); i++) {
		if (i != 9) {
			printf("%d, ", a[i]);   //used for all numbers in the array except for the last
		}
		else {
			printf("%d", a[i]);   //prints without comma for last output
		}
	}

	return 0;
}

void bubbleSort(int a[], int size, int (*compare)(int, int)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (compare(a[j], a[j + 1])) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int ascending(int a, int b) {
	return a > b;  
}

int descending(int a, int b) {
	return a < b;  
}
