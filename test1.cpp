#include <stdio.h>

long long gt(int n)
{
	long long res = 1;
	
	for(int i = 1; i <= n; i++)
		res *= i;
		
	return res;
}

int main()
{
	for(int i = 1; i <= 30; i++)
	{
		printf("%lld\n", gt(i));
	}
	
	return 0;
}
