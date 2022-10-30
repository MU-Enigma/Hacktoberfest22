//Hacktoberfest22-Type3-l1-P5_ReverseStr
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[106];
    scanf("%[^\n]s", ch);

    cout<<"[";
    for(int i=strlen(ch)-1; i>=0; i--)
        cout<<""""<<ch[i]<<"""";
    cout<<"]";
    return 0;
}