#include <stdio.h>
void main(){
	int i = 0, j = 0, k = 0;

	for(i = 0; i <= 5; i++){
		printf("\n");
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
	}
	for(i = 5; i >= 0; i--){
		printf("\n");
		for(k = 1; k <= i ; k++)
			printf("%d", k);
	}
}