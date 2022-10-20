#include <bits/stdc++.h>
 
using namespace std;
int mySqrt(int num) {
        int y = 1;
        int n = num;
        while (n > y) {
            n = y +  (n - y) / 2;
            y = num / n;
        }
        return n;
    }
    
int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Square Root is: "<< mySqrt(num);
  
    return 0;
}