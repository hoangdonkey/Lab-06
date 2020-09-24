#include <stdio.h>
void main(){
	int num[8];
	int i;
	num[0] = 10;
	num[1] = 70;
	num[2] = 60;
	num[3] = 40;
	num[4] = 50;
	num[5] = 453;
	num[6] = 23;
	num[7] = 234;
	for(i = 1; i <= 7; i++){
		printf("\nNumber at [%d] is %d", i, num[i]);
	}
}