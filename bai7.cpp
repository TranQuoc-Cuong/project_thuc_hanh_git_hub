#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	int sum = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			sum += 1;
		}
	}
	
	printf("%d\n", sum);
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
