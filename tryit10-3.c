#include <stdio.h>
void main(){
	int num1, num2;

	printf("Multiplication table of: ");
	scanf("%d", &num1);
	for(num2 = 1; num2 <= 10; num2++){
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
	}
}