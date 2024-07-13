#include <stdio.h>

int length(char* string){
	int n = 0;
	while (*(string+n) != '\0'){
		n++;	
	}
	return n;
}

int compare(char* s1, char* s2){
	int l1 = length(s1);
	int l2 = length(s2);
	if (l1 != l2) 
		return 0;	
	for (int i = 0; i < l1; i++) {
		if (s1[i] != s2[i])
			return 0;
	}
	return 1;
}

int main(void){
	printf("%d\n", length("HI!"));
	printf("%d\n", compare("HI?", "HI?"));
	return 0;
}
