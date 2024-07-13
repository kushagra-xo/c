#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * Searches for a query linearly inside of an integer array
 * Time = O(n)
 * @param query what you wanna find
 * @param array[] where you wanna find
 * @param size i.e. size of array
 */
bool linearSearch(int query, int array[], int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++) {
		if (query == array[i]) {
			return 1;
		}
	}
	return 0;
}

/*
 * Logirathmically search an integer query inside an array
 * Time complexity = O(log n)
 * @param query  what you cann search
 * @param array[] where you wanna search
 */
bool binarySearch(int query, int array[]){

	/*
	 * find the middle
	 * go in the middle
	 * check where the number could be
	 * go in that direction
	 * repeat
	*/

	return 0;
}

/*
 * Searches for an string inside an array with strcmp()
 * Time complexity = O(n);
 * @param *string search quer
 * @param *strings array of strings
 * @param n size of array
*/

bool stringSearch(char *string, char *strings[], int n){
	for (int i = 0; i < n; i++) {
		if (strcmp(strings[i],string) == 0){
			return 1;
		}
	}
	return 0;
}

int main(void)
{
	int list[8] = {1,2,3,4,5,6,7,8};
	char *strings[] = {"apple", "banana", "orange"};
	int size = sizeof(list) / sizeof(list[0]);
	bool Lresult = linearSearch(4, list, size);
	bool Sresult = stringSearch("kiwi", strings, 3);
	printf("LResult = %b\n", Lresult);
	printf("SResult = %b\n", Sresult);
	return 0;
}
