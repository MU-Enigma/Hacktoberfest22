#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length(); 
    int last = n-1;

    for(int i = 0 ; i < n/2 ; i++)
    {
        char temp = s[i];
        s[i] = s[last];
        s[last] = temp;
        last--;
    }
    cout << s;
}