#include <iostream>
using namespace std;
//Function of factorial.
int fact(int n)						
{
	int factorial=1;
	
	for(int i=1;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	//Taking input from user.
	int a;										
	cout<<"numRows:";
	cin>>a;
	
	cout << "[";
    for(int i=0;i<a;i++)						
	{
		cout<<"[";
        for(int j=0;j<=i;j++)					
		{
			cout<<fact(i)/(fact(j)*fact(i-j));		

            if(j == i){
                cout << "";
            }
			else{
				cout << ",";
			}
		}
        cout<<"]";
		//cout<<",";

		if(i == a - 1)
		cout<<"";
		else
		cout<<",";
	}
    cout << "]";

	return 0;
}