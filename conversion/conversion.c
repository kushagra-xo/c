#include <stdio.h>

#ifndef DEBUG
#define DEBUG(x) printf("DEBUG:%i\n", x)
#endif 

int main(void)
{
	int num = 15;
	DEBUG(num);
	printf("%#x\n", num);
	return 0;
}
