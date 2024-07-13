#include <stdio.h>

int main(void)
{
	printf("Enter integer:");
	int integer = 0;
	scanf("%d", &integer);
	printf("Enter float:");
	float pointed = 0.0;
	scanf("%f", &pointed);
	printf("Enter a string:");
	char str[100] = "";
	getchar();
	fgets(str, sizeof(str), stdin);
	printf("You entered:%s\n", str);
	printf("Enter integer again:");
	int integerAgain = 0;
	if (scanf("%10d", &integerAgain) != 1) {
		printf("INVALID\n");
	}
	getchar();
	int mulint = 0;
	float mulfloat = 0.0;
	char mulstr[100] = "";
	printf("Enter integer, float and string:");
	if (scanf("%d %f %99s", &mulint, &mulfloat, &mulstr) != 3){
		printf("INVALID\n");
	}
	return 0;
}
