#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void fillArray(int * arr, int len) {
	int i;
	for (i = 0; i < len; i++)
		arr[i] = rand() % 100;
}

void printArray(int * arr, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	puts("");
}

void swap(int* a, int* b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int bubbleSort(int * arr, int len) {
	int i;
	int j;
	int count = 0;
	for (i = 0; i < len; i++)
		for (j = 0; j < len - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);

			}
			count++;
		}
	return count;
}
//1
int myBubbleSort(int * arr, int len) {
	int i;
	int j;
	int count = 0;
	for (i = 0; i < len; i++)
		for (j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);

			}
			count++;
		}
	return count;
}

//2
int shakerSort(int * arr, int len) {
	int i;
	int j;
	int count = 0;
	for (i = 0; i < len; i++) {
		if (i % 2)
		{
			for (j = len - i; j > 0; j--) {
				if (arr[j] < arr[j - 1]) {
					swap(&arr[j], &arr[j - 1]);
					count++;

				}
			}
			
		} else {
			for (j = i; j < len - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(&arr[j], &arr[j + 1]);
					count++;

				}
			}
		}
	}
}

//int main() {
//	//const int SIZE = 15;
//	int arr1[15];
//	int arr2[15];
//	int arr3[15];
//
//	fillArray(arr1, 15);
//	fillArray(arr2, 15);
//	fillArray(arr3, 15);
//
//	printArray(arr1, 15);
//	printArray(arr2, 15);
//	printf("Num of operations in:\n the first bubble sort: %d\n the second bubble sort: %d\n", bubbleSort(arr1, 15), myBubbleSort(arr2, 15));
//	printArray(arr1, 15);
//	printArray(arr2, 15);
//
//	printf("\n");
//	printArray(arr3, 15);
//	printf("Num of operations in shaker sort: %d\n", shakerSort(arr3, 15));
//	printArray(arr3, 15);
//	_getch();
//	return 0;
//}