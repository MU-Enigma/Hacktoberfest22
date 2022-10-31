//Hacktoberfest22-Type3-l1-P4_Sqrt(x)
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float i=0.0, val;
    val = n/2;  //half the number given

    while(val!=i)
    {
        i = val;
        val = ((n/i)+i)/2;
    }
    cout<<(int)val<<endl;
    return 0;
}