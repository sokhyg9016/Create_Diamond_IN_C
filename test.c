#include<stdio.h>
#include<stdlib.h>
#define abs(x) ((x > 0)?(x):(-x))

int main()
{
	int i, j;

	int height = 5;
	
	fputs("INPUT HEIGHT: ", stdout);
	scanf_s("%d", &height);

	for (i = -height; i < height; i++)
	{
		for (j = 0; j < abs(i); j++)
		{
			printf(" ");
		}
		for (j = 0; j < (height - abs(i)) * 2 - 1; j++)
		{
			printf("*");
		}
		puts("");
	}
	
	return 0;
}