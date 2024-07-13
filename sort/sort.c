#include <stdio.h>

int main(void)
{
	int listOfNumbers[] = {4, 7, 8, 10, 2, 1, 6, 0};
	int size = sizeof(listOfNumbers)/sizeof(listOfNumbers[0]);

	/* selection sort
	for (int h = 0; h < size; h++) {
		int MIN_INDEX = h;
		for (int i = h; i < size; i++) {
			if (listOfNumbers[i] < listOfNumbers[MIN_INDEX]) {
				MIN_INDEX = i;
			}
		}
		int temp = listOfNumbers[h];
		listOfNumbers[h] = listOfNumbers[MIN_INDEX];
		listOfNumbers[MIN_INDEX] = temp;
	} */

	// bubble sort
	
	for (int h = 0; h < size; h++) {
		for (int i=0; i< size-1; i++) {
			if(listOfNumbers[i+1] < listOfNumbers[i]){
				int temp = listOfNumbers[i];
				listOfNumbers[i] = listOfNumbers[i+1];
				listOfNumbers[i+1] = temp;
			}
		}
	}
	
	
	for (int i = 0; i < size; i++) {
		printf("%d ", listOfNumbers[i]);
	}
	printf("\n");

	return 0;
}
