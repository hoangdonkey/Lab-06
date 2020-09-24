#include <stdio.h>
#include <string.h>
void main()
{
	int i, n = 0;
	int item;
	char x[10][12];
	char temp[12];

	printf("Enter each string on a separate line \n\n");
	printf("Type 'END' when over \n\n");

	do{
		printf("String %d: ", n + 1);
		scanf(" %s", &x[n]);
	}
	while(strcmp(x[n++], 'END'));
	n = n - 1;
	
}