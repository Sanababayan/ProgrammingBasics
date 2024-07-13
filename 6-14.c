#include <stdio.h>

int winter(int x, int n)
{
	if (x > n)
		return 0;
	return 1 + winter(x * 10, n) + winter(x * 10 + 1, n);
}
int main()
{
	int n;
	scanf("%d",&n);

	printf("%d",winter(1, n));

	return 0;
}
