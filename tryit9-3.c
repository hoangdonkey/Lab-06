#include <stdio.h>
void main(){
	int num1 = 0, num2 = 0, sum = 0, max = 0;

	printf("Nhap max: ");
	scanf("%d", &max);
		num1 = 1;
		num2 = 0;
	do{
		sum = num1 + num2;
		printf("%d,", sum);
		num1 = num2;
		num2 = sum;
	}
	while(sum <= max);
}