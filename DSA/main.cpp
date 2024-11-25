#include <iostream>
#include "QuickFind.h"

static void quickFind() {
	QuickFind quickF(10);
	quickF.makeUnion(0, 9);
	quickF.makeUnion(0, 3);
	quickF.makeUnion(4, 8);
	quickF.makeUnion(1, 8);
	quickF.makeUnion(0, 4);

	std::cout << "Connected: " << quickF.isConnected(9, 1);
}


static void printArray(const int* arr, const int& size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << '\n';
}


static void findTheMinimumAndMaximum(int arr[], const int& size) {
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	std::cout << "Min: " << min << ", Max: " << max << '\n';
}

static void arrayReverse(int arr[], const int& size) {
	printArray(arr, size);

	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}

	printArray(arr, size);
}

static void bubbleSort(int arr[], const int& size) {
	printArray(arr, size);
	bool swapped = false;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}

		if (!swapped) break;
	}

	printArray(arr, size);
}

static void selectionSort(int arr[], const int& size) {
	printArray(arr, size);

	for (int i = 0; i < size - 1; i++) {
		int minI = i;

		for (int j = i; j < size - 1; j++) {
			if (arr[j] < arr[minI]) minI = j;
		}

		int temp = arr[i];
		arr[i] = arr[minI];
		arr[minI] = temp;
	}

	printArray(arr, size);
}

static void insertionSort(int arr[], const int& size) {
	printArray(arr, size);

	for (int i = 1; i < size; ++i) {
		int key = arr[i];
		int j = i - 1;
	}

	printArray(arr, size);
}

static void arrays() {
	int arr[] = { 42, 17, 8, 93, 56, 21, 11, 37, 70, 5, 64, 32, 19, 27, 85, 12, 40, 6, 50, 74 };
	int size = sizeof(arr) / sizeof(arr[0]);

	//findTheMinimumAndMaximum(arr, size);
	//arrayReverse(arr, size);
	//bubbleSort(arr, size);
	selectionSort(arr, size);
}

int main(int argc, char* argv[]) {
	//quickFind();
	arrays();

	return EXIT_SUCCESS;
}