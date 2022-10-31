#include <iostream>
#include <cstring>
using namespace std;

void reverse_string(char *input)
{
    int n = strlen(input);
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = input[i];
        input[i] = input[n - i - 1];
        input[n - i - 1] = temp;
    }
}

int main()
{
    char str[105];
    cin.getline(str, 105);
    reverse_string(str);
    cout << str << endl;
    return 0;
}
