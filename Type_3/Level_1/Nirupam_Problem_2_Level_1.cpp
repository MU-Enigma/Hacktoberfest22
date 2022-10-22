#include <iostream>
#include <math.h>
using namespace std;

int sum_of_sqr_of_dig(int n)
{
    int remi = 0, ans = 0;
    
    while(n != 0)
    {
        remi = n%10;
        ans += pow(remi, 2);
        n = n/10;
    }
    
    return ans;
}

bool is_happy(int n)
{
    int one_step = n;
    int two_steps_at_once = n;
    
    
    one_step = sum_of_sqr_of_dig(one_step);
    two_steps_at_once = sum_of_sqr_of_dig(sum_of_sqr_of_dig(two_steps_at_once));
    
    while(one_step != two_steps_at_once)
    {
        one_step = sum_of_sqr_of_dig(one_step);
        two_steps_at_once = sum_of_sqr_of_dig(sum_of_sqr_of_dig(two_steps_at_once));
    }
    
    if(one_step == 1)
    {
        return true;
    }
    
    return false;
    
}

int main()
{
    int num = 0;
    cin>>num;
    
    bool ans = is_happy(num);
    
    if(ans)
    {
        cout<<"true"<<endl;
    }
    
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}
