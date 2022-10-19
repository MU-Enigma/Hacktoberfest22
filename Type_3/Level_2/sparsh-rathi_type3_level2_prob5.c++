#include <bits/stdc++.h>
using namespace std;

int calculate(string s)
{
    int len = s.size();

    if (len == 0)
    {
        return 0;
    }

    stack<int> myStack;
    int curr_number = 0;
    char last_operation = '+';

    for (int i = 0; i < len; i++)
    {
        char curr_char = s[i];
        if (isdigit(curr_char))
        {
            curr_number = (curr_number * 10) + (curr_char - '0');
        }
        if ((!isdigit(curr_char) && !iswspace(curr_char)) || i == len - 1)
        {
            if (last_operation == '-')
            {
                myStack.push(-curr_number);
            }
            else if (last_operation == '+')
            {
                myStack.push(curr_number);
            }
            else if (last_operation == '*')
            {
                int stackTop = myStack.top();
                myStack.pop();
                myStack.push(stackTop * curr_number);
            }
            else if (last_operation == '/')
            {
                int stackTop = myStack.top();
                myStack.pop();
                myStack.push(stackTop / curr_number);
            }
            last_operation = curr_char;
            curr_number = 0;
        }
    }
    int res = 0;
    while (myStack.size() != 0)
    {
        res = res + myStack.top();
        myStack.pop();
    }
    return res;
}

int main()
{
    string str;
    getline(cin, str);

    cout << calculate(str);
    return 0;
}

