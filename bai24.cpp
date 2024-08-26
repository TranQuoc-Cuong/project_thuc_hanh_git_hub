#include <stdio.h>
#include <math.h>

int main()
{
	long long a, b; scanf("%lld %lld", &a, &b);
	
	int min = fmin(a, b);
	long long gt = 1;
	for(int i = 1; i <= min; i++)
	{
		gt *= i;
	}
	
	printf("%lld", gt);
	
	return 0;
}
