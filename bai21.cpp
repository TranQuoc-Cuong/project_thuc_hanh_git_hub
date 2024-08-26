#include <stdio.h>

int main()
{
	int n; scanf("%d", &n);
	
	for(int d = 0; d < 4; d++)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				switch(d)
				{
					case 0:
						printf("*");
					break;
					
					case 3:
						if(i == 0 || i == n - 1) printf("%d ", i + 1);
						else 
						{
							if(j == 0 || j == n - 1)	printf("%d ", i + 1);
							else printf("  ");
						}
					break;
					
					default:
						if(i == 0 || i == n - 1)	printf("*");
						else
						{
							if(j == 0 || j == n - 1)	printf("*");
							else 
							{
								if(d == 1) printf(" ");
								else if (d == 2) printf("#");	
							}			
						}				
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
