#include <stdio.h>
void main(){
	int i, j;

	for(i = 0; i <= 9; i++){
		printf("\n\n");
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
	}
}