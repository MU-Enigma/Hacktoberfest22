#include <stdio.h>
#include <stdbool.h>

int numSquare(int n)
{
	int square = 0;
	while (n) {
		square += (n % 10) * (n % 10);
		n /= 10;
	}
	return square;
}
bool Happynum(int n)
{
	int slow, fast;
	
	slow = fast = n;
	do {
		slow = numSquare(slow);
		fast = numSquare(numSquare(fast));
	} while (slow != fast);
	
	return (slow == 1);
}
int main()
{
int n;
scanf("%d", &n);
	if (Happynum(n))
		printf("%d is a Happy number\n", n);
	else
		printf("%d is not a Happy number\n", n);

}


