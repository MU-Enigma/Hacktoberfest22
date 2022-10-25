#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    
    else
        return( n * factorial(n-1));

}
void pascal_triangle(int numRows)
{
    
    cout<<"[";

    for(int n=0; n<numRows; n++)
    {

        cout<<"[";
        
        for(int r=0; r<=n; r++)
        {
            int num = factorial(n);
            int den = factorial(r) * factorial(n-r);
            int fact = num/den;
            cout<<fact;

            if(r!=n)
                cout<<",";
        }

        if(n!=numRows-1)
            cout<<"], ";
        else
            cout<<"]";
    }

    cout<<"]\n";
}

int main()
{
    int numRows;
    scanf("%d", &numRows);

    pascal_triangle(numRows);

}