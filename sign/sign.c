#include <stdint.h>
#include <stdio.h>

int main(void)
{
	int num = 10;
	for (int i=31; i>0; i--) {
		for (int j=31; j>0; j--) {
			printf("%d", num >> i >> j & 1 );
		}
		printf("\n");
	}
	return 0;
}
