#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int matrix1[10][10], matrix2[10][10];
	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			
			printf("%d ", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}

	return 0;
}