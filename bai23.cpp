#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = (i * n) + 1; j <= n * (i + 1); j++)
		{
			printf("%d ", j);
		} 
		printf("\n");
	}
	
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j <= n + i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n - i; j++)
			printf("~");
		for(int j = 0; j < i; j++)
			printf("%d", i);
		printf("\n");
	}
	
	for(int i = 1; i <= n; i++)
	{
		int kt = i;
		int kc = n - 1;
		for(int j = 1; j <= i; j++)
		{
			printf("%d ", kt);
			kt += kc;
			--kc;
		}
		printf("\n");
	}
	
	return 0;
}
