#include <iostream>
using namespace std;

void reverse_string(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    getline(cin, str);

    reverse_string(str);
    return 0;
}