#include <stdio.h>

int main()
{
	int x; scanf("%d", &x);
	
	int temp = x / 28;
	
	int chai = temp;
	
	while(temp >= 3)
	{
		++temp;
		temp -= 3;
		chai += 1;
	}
	
	printf("%d", chai);
	
	return 0;
}
