#include<iostream>
#include<iomanip>
using namespace std;

////////////////////////////////////////////////////////////////////

long fact(long n)
{
    
   if(n == 0 || n == 1)
   {
       return 1;
   }
   
   else
   {
       return n * fact(n - 1);
   }
   
}

////////////////////////////////////////////////////////////////////

long Combination_nCr(long n, long r)
{
    
   long ans = 1, i;
   for(i = n;i > r;i--)
      ans = ans * i;
    
   return long(ans/fact(n-r));
   
}

////////////////////////////////////////////////////////////////////

void Pascal_Triangle(long n)
{
    
   for(long i = 0;i < n;i++)
   {
       for(long j = 0;j < i + 1;j++)
       {
           cout<<Combination_nCr(i, j)<<" ";
       }
       cout<<"\n";
   }
   
}

////////////////////////////////////////////////////////////////////

int main()
{
   long num_lines_pascal;
   cin>>num_lines_pascal;
   Pascal_Triangle(num_lines_pascal);
   
   return 0;
}
