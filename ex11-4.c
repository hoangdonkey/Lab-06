#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ary[5];
	int i;
	printf("\nEnter string: ");
	scanf(" %s", &ary);
	printf("\n The string is %s \n\n", ary);
	for(i = 0; i < 5; i++){
		printf("\t%d", ary[i]);
	}
	return 0;
}