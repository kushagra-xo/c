#include <stdio.h>
#include <stdlib.h>
#include <klib.h>
#include <string.h>

int main(void){
	string s = "HI!";
	string t = malloc(strlen(s) + 1);
	for(int i = 0,n = strlen(s); i <= n; i++){
		t[i] = s[i];
	}
	printf("%p\n", s);
	printf("%p\n", t);
	printf("%s\n", s);
	printf("%s\n", t);
	printf("%c\n", *s);
	return 0;
}
