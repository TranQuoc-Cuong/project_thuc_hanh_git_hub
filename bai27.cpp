#include <stdio.h>

int main()
{
	long long n; scanf("%lld", &n);
	
	while(n > 9)
	{		
		int temp = 0;	
		
		while(n)
		{	
			temp += n % 10;
			n /= 10; 
		}
		n = temp;
	}

	
	printf("%lld", n);
	
	return 0;
}
