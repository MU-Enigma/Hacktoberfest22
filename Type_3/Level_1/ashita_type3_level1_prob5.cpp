#include <iostream>  
#include <string.h>  
using namespace std;

int main()  
{  
    char s[1000]; 
    cin>>s;  

    int i, temp;  
    int len = strlen(s); 

    for (i = 0; i < len/2; i++)  
    {   
        temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
    }  
    
    cout<<s<<endl;  
}
