#include <iostream>
using namespace std;

int next_number(int num)
{
    int last_digit, sum = 0;
    while (num > 0)
    {
        last_digit = num % 10;
        last_digit *= last_digit;
        sum = sum + last_digit;
        num = num / 10;
    }
    return sum;
}

bool happy_number(int num)
{
    int slow = num;
    int fast = next_number(num);
    while (fast != 1 && slow != fast)
    {
        slow = next_number(num);
        fast = next_number(next_number(fast));
    }
    return fast == 1;
}

int main()
{
    int num;
    cin >> num;
    bool ans = happy_number(num);
    cout << (ans == 1 ? "true" : "false") << endl;
    return 0;
}
