// C++ implementation of the approach
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Recursive function that returns square root
// of a number with precision upto 5 decimal places
double Square(double m, double i, double j)
{
	double id = (i + j) / 2;
	double mu = id * id;

	// If mid itself is the square root,
	// return mid
	if ((mu == m) || (abs(mu - m) < 0.00001))
		return id;

	// If mu is less than n, recur second half
	else if (mu < m)
		return Square(m, id, j);

	// Else recur first half
	else
		return Square(m, i, id);
}

// Function to find the square root of n
void findSqrt(int n)
{
	double i = 1;

	// While the square root is not found
	bool found = false;
	while (!found) {

		// If n is a perfect square
		if (i * i == n) {
			cout << fixed << setprecision(0) << i;
			found = true;
		}
		else if (i * i > n) {

			// Square root will lie in the
			// interval i-1 and i
			double res = Square(n, i - 1, i);
			cout << fixed << setprecision(5) << res;
			found = true;
		}
		i++;
	}
}

// Driver code
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	findSqrt(n);

	return 0;
}
