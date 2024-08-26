#include <stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	
	if(n == 0)
	{
		printf("1");
		return 0;
	}
	
	int cnt = 0;
	
	while(n != 0)
	{
		++cnt;
		n /= 10;	
	}
	
	printf("%d", cnt);
	
	return 0;
}
