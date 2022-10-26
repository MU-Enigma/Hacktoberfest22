#include <iostream>
using namespace std;

bool ishappy(int n)
{
    while(true)
    {
        
        long sum = 0;
        
        while (n != 0) {
            
            int lastDigit = n % 10;
            n /= 10;
            sum += lastDigit * lastDigit;
        }
        
        if (1 <= sum && sum <= 9) {
            
            if (sum == 1 || sum == 7) return true;
            else return false;
        }
        else n = sum;
    }
}
    

int main()
{
    int n;
    cin >> n;
    if(ishappy(n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

}