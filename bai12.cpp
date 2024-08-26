#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	long long sum = 0;
	
	for(int i = 2; i <= n * 2; i += 2)
	{
		sum += i;
	}
	
	printf("%lld", sum);
	
	return 0;
}
