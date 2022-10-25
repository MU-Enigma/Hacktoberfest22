#include <iostream>
using namespace std;

int num(int n, int k)
{
	int ans = 1;
	if (n-k < k)
	{
		k = n-k;
	}
	for (int i=0; i<k; i++)
	{
		ans = ans * (n -i);
		ans = ans / (i+1);
	}
	return ans;
}


int main()
{
	int limit;
    cout<<"Enter the number of rows: ";
    cin>>limit;
	for (int i = 0; i<limit; i++)
	{
		for (int j=0; j<=i; j++)
        {
			cout<<num(i,j)<<" ";
        }
		cout <<endl;
	}
	return 0;
}
