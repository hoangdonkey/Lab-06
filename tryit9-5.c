#include <stdio.h>
void main(){
	int i, j;

	for(i = 7; i >= 0; i--){
		printf("\n");
		for(j = 0; j <= i; j++){
			printf("*");
		}
	}
}