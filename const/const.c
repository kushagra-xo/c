#include <stdint.h>
#include <stdio.h>

int main(void)
{
	const int num = -10;
	printf("NUMBER:\t%d\n", num);
	printf("SIZE:\t%d\n", sizeof(num) * 8);
	for (int i=sizeof(num)*8-1; i>=0; i--) {
		printf("%d", num >> i & 1);
		if (i%4==0 && i != 0) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
