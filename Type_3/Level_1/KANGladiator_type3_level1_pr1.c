#include <stdio.h>

int bicof(int x, int n);

void pascalprint(int x)
{	

	int list[x];
	for (int line = 0; line < x; line++)
	{

		for (int i = 0; i <= line; i++)
			printf("%d ",
					bicof(line, i));
		printf("\n");
	}
}
int bicof(int x, int n)
{
	int res = 1;
	if (n > x - n)
	n = x - n;
	for (int i = 0; i < n; ++i)
	{
		res *= (x - i);
		res /= (i + 1);
	}
	
	return res;
}
int main()
{
	int numRows;
    scanf("%d", &numRows);
	pascalprint(numRows);
	return 0;
}
