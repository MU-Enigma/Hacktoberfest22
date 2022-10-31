#include <iostream>
using namespace std;

int square_root(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    int i = 1, res = 1;
    while (res <= num)
    {
        i++;
        res = i * i;
    }
    return i - 1;
}

int main()
{
    int num;
    cin >> num;
    int ans = square_root(num);
    cout << ans << endl;
    return 0;
}
