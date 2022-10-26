
#include <iostream>
#include <unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

bool ans(pair<int, int> p1, pair<int, int> p2)
{

	if (p1.second == p2.second)
		return p1.first > p2.first;

	return p1.second > p2.second;
}

int main()
{
	int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"enter the elements "<<i+1<<": ";
        cin>>arr[i];
        
    }

    cout<<"Enter the number of frequency: ";
    int k;
    cin>>k;

	unordered_map<int, int> mapping;
	for (int i = 0; i < size; i++)
		mapping[arr[i]]++;

	vector< pair<int, int> > freq_arr(mapping.begin(), mapping.end());

	sort(freq_arr.begin(), freq_arr.end(), ans);

	for (int i = 0; i < k; i++)
    {
		cout << freq_arr[i].first << " ";
    }

	return 0;
}
