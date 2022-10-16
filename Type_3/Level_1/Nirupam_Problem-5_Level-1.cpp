#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////////////////////////////////

char *Reverse_Strg(char *Str, int size)
{
    char temp;
    
    for(int i=0;i < size/2;i++)
    {
        temp = Str[i];
        Str[i] = Str[size-i-1];
        Str[size-i-1] = temp;
    }
    
    return Str;
}

//////////////////////////////////////////////////////////////

int main()
{
    char *S = new char(105);
    
    cin.getline(S, 105);
    
    int leng = 0;
    
    for(int i=0;S[i] != '\0';i++)
    {
        leng++;
    }
    
    S = Reverse_Strg(S, leng);
    
    for(int i=0;S[i] != '\0';i++)
    {
        cout<<S[i];
    }
    cout<<endl;
    return 0;
}
