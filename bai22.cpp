#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = n; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j > i; j--)
		{
			printf(" ");
		}
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = n; i > 0 ; i--)
	{
		for(int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for(int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
		for(int i = n; i > 0 ; i--)
	{
		for(int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for(int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(j == 0 || j == i - 1 || i == 1 || i == n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
