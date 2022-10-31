// C++ program to find the array element
// that appears only once

#include <iostream>
using namespace std;

// Function to find the
int Single(int a[], int ar_size)
{

	// Iterate over every element
	for (int i = 0; i < ar_size; i++) {

		// Initialize count to 0
		int count = 0;

		for (int j = 0; j < ar_size; j++) {

			// Count the frequency
			// of the element
			if (a[i] == a[j]) {
				count++;
			}
		}

		// if the frequency of the
		// element is one
		if (count == 1) {
			return a[i];
		}
	}

	// if no element exist at most once
	return -1;
}

// Driver code
int main()
{
	int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
	int n = sizeof(ar) / sizeof(ar[0]);
	int arr[]={4,1,2,1,2};
	int num=sizeof(arr)/sizeof(arr[0]);
	// Function call
	cout << "Element occurring once is "
		<< Single(ar, n)<<endl;
    cout<<"Element occurring once in second array "<<Single(arr,num);
	return 0;
}


