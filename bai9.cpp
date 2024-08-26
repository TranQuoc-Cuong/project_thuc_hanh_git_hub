#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	long long sum;
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0) sum *= i;
	}
	
	printf("%lld", sum);
	
	return 0;
}
