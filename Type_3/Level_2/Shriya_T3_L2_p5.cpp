//Hacktoberfest22-Type3-l2-P5_Evaluate
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int len,val=0, k=0;
    char pf[100];
    string s;
    cin>>s;

    len=s.length();

    for (int i = 0; i<len; i++)
    {
        if(s[i]!=' ')
        {
            pf[k]=s[i];
            k++;
        }
    }
    
    for (int i = 0; i<=len ; i++)
    {
        if (pf[i]=='/' || pf[i]=='*')
        {
           if (pf[i]=='/')
            {
                val=(pf[i-1]-48)/(pf[i+1]-48);
                pf[i-1]=val+'0';
                for (int k = i; k<=len;k++)
                {
                    pf[k]=pf[k+2];
                }
                
                len=len-2;
                i--;
            }
            else if (pf[i]=='*')
            {
                val=(pf[i-1]-48)*(pf[i+1]-48);
                pf[i-1]=val+'0';
                for (int k = i; k<=len;k++)
                {
                    pf[k]=pf[k+2];
                }

                len=len-2;
                i--; 
            }
        }

    }

    for (int i=0; i<=len ; i++)
    {
        if (pf[i]=='+' || pf[i]=='-')
        {
            if (pf[i]=='+')
            {
                val=(pf[i-1]-48)+(pf[i+1]-48);
                pf[i-1]=val+'0';
                for (int k = i; k<=len;k++)
                {
                    pf[k]=pf[k+2];
                }
                len=len-2;
                i--; 
            }

            else if (pf[i]=='-')
            {
                val=(pf[i-1]-48)-(pf[i+1]-48);
                pf[i-1]=val+'0';
                for (int k = i; k<=len;k++)
                {
                    pf[k]=pf[k+2];
                }
                len=len-2;
                i--;
            }
        }
        
    }
 
    for(int i=0; i<len; i++)
        cout<<pf[i]-'0';
    cout<<endl;
    return 0;
}
