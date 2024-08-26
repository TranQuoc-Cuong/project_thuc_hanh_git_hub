#include <stdio.h>
#include <math.h>

int main()
{
	long long n;
	scanf("%d", &n);
	
	int temp, cnt = 0;
	
	while(n > 0)
	{
		temp = n % 10;
		if(temp == 2 || temp == 3 || temp == 5 || temp == 7) ++cnt;
		n /= 10;
	}
	
	printf("%lld", cnt);
	
	return 0;
}
