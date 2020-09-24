#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A[10][10], B[10][10], C[10][10];
	int row, col;
	int i, j;

	printf("Enter the dimension of the matrix A and B: \n");
	scanf("%d %d", &row, &col);
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("A[%d,%d], B[%d,%d]: \n", i, j, i, j);
			scanf("%d %d", &A[i][j], &B[i][j]);
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("A[%d,%d] = %d\nB[%d,%d] = %d\nC[%d,%d] = %d\n", i, j, A[i][j], i, j, B[i][j], i, j, C[i][j]);
		}
	}
	return 0;
}