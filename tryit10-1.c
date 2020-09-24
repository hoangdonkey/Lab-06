#include <stdio.h>
void main(){
	int age, i;
	char name[40];
	
	printf("Insert age: ");
	scanf("%d", &age);
	printf("Insert name: ");
	fflush(stdin);
	gets(name);

	for(i = 1; i <= age; i++){
		printf("%s\n", name);
	}
}