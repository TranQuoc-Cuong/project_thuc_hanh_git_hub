#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	
	int input;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		if(input % 2 == 0)	printf("EVEN\n");
		else printf("ODD\n");
	}
	
	return 0;
}
