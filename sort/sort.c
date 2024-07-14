#include <stdio.h>

void bubbleSort(int* arr, int size){
    for (int h = 0; h < size; h++) {
		for (int i=0; i< size-1; i++) {
			if(arr[i+1] < arr[i]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

void selectionSort(int* arr, int size){
	for (int h = 0; h < size; h++) {
		int MIN_INDEX = h;
		for (int i = h; i < size; i++) {
			if (arr[i] < arr[MIN_INDEX]) {
				MIN_INDEX = i;
			}
		}
		int temp = arr[h];
		arr[h] = arr[MIN_INDEX];
		arr[MIN_INDEX] = temp;
	}
}

void merge(int* arr, int left, int middle, int right){

}

void mergeSort(int* arr, int right, int left){
	if (right > left) {
		int middle = left + (right-left) / 2;
		mergeSort(arr, left, middle);
		mergeSort(arr, middle+1, right);
		merge(arr, left, middle, right);
	}
}

int main(void)
{
	int listOfNumbers[] = {4, 7, 8, 10, 2, 1, 6, 0};
	int size = sizeof(listOfNumbers)/sizeof(listOfNumbers[0]);

	bubbleSort(listOfNumbers, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", listOfNumbers[i]);
	}
	printf("\n");

	return 0;
}
