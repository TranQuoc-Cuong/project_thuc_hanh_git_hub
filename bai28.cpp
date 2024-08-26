#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	
	long long sum = 0;
	long long sum_second = 1;
	
	for(int i = 1; i <= n; i++)
	{
		sum_second *= i;
		sum += sum_second;
	}
	
	printf("%lld", sum);
	
	return 0;
}
