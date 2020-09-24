#include <stdio.h>
void main(){
	int num1, num2, i = 0, sum = 0;
	
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);

	if(num1 < num2){
		for(i = num1; i <= num2; i++){
			if(i % 2 != 0){
				sum = sum + i;
			}
		}
	}
	else{
		for(i = num2; i <= num1; i++){
			if(i % 2 != 0){
				sum = sum + i;
			}
		}
	}
	printf("%d", sum);
}