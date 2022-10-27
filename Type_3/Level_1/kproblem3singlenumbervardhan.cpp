#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ;i < n ; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0 ;i < n ; i++)
    {
        bool temp = true;
        for(int j = 0 ; j < n ;j++)
        {
            if (i == j) continue;
            if (arr[i] == arr[j])
            {
                temp = false; 
                break;
            }
        }
        if (temp)
        {
            cout << arr[i] << endl;
            break;
        }
    }
}