#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n = 0;
	int num[100];
	int l = 0;
	int desnum[100], k = 0;
	int i = 0, j = 0, temp = 0;
	
	printf("Enter the total number of marks to be entered: ");
	scanf("%d", &n);

	for(l = 0; l < n; l++){
		printf("Enter the marks of students %d: ", l + 1 );
		scanf("%d", &num[l]);
	}

	for(k = 0; k < n; k++){
		desnum[k] = num[k];
	}
	for(i = 0; i < n - 1; i++){
		
		for(j = i + 1; j < n; j++){
			
			if(desnum[i] < desnum[j]){
				temp = desnum[i];
				desnum[i] = desnum[j];
				desnum[j] = temp;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		printf("\nNumber at [%d] is %d", i + 1, desnum[i]);
	}	
	return 0;
}	