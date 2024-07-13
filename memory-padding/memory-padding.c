#include <stdio.h>

typedef struct{
	int i;
	char c1;
	char c2;
} myStruct;

int main(void){
	myStruct someStuff;
	printf("%d\n", sizeof(someStuff));
}
