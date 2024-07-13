#include <stdlib.h>
#include <stdio.h>

typedef struct{
	char* name;
	char* contact;
} person;

int main(void){
	person Person;
	Person.name = malloc(256);
	Person.name = malloc(256);
	printf("Enter name:");
	scanf("%s", Person.name);
	getchar();
	printf("Enter contact:");
	scanf("%s", Person.contact);
	FILE* file = fopen("phonebook.csv", "a");
	fprintf(file, "%s,%s\n", Person.name, Person.contact);
	fclose(file);
	free(Person.name);
	free(Person.contact);
	return 0;
}
