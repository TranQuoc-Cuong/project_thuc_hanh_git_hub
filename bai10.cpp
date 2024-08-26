#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	bool check;
	int input;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		if(input == 2022) check = true;
	}
	
	if(check)	printf("YES");
	else printf("NO");
	
	return 0;
}
