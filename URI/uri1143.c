#include <stdio.h>

int main()
{
	int i, j;
	scanf("%d", &j);
	for (i = 1; i <= j; ++i)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	return 0;
}