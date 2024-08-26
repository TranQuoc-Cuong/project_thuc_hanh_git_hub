#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	long long sum = 0;
	int temp;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if(temp % 2 == 0)
		{
			sum += temp;
		}
	}
	
	printf("%lld", sum);
	
	return 0;
}
