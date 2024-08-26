#include <stdio.h>

#define FOR(i, a, b) for(int i = a; i <= (b); i++)

int main()
{
	FOR(i, 0, 10)
	{
		printf("%d ", i);
	}
	return 0;
}
