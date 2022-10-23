#include<iostream>
#include<string.h>
using namespace std; 

int main()
{
    string sentence;
    cin>>sentence;

    int size = sentence.length() -1;

    int start =0;
    while (start < size)
    {
        int temp = sentence[start];
        sentence[start] = sentence[size];
        sentence[size] = temp;
        start++;
        size--;
    }

    cout<<sentence;
    return 0;
}