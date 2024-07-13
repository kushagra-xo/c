#include <stdint.h>
#include <stdio.h>
#include <klib.h>

typedef uint8_t byte ;

int main(void){
	int n = 50;
	int* address = &n;
	string s = "HI!";
	byte b = 255;
	printf("%d\n", n);
	printf("%p\n", address);
	printf("%p\n", s);
	printf("%p\n", &s[0]);
	printf("%c\n", s[3]);
	printf("%c\n", *s);
	printf("%d\n", b);
}
