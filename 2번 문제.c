#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (j < i)
			{
				printf("  ");
			}
			else 
			printf("%d ", j-i+1);

		}
		printf("\n");
	}
	return 0;
}