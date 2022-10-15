#include<iostream>
using namespace std;
int check(int n){
  int r = 0, sum = 0;
  while(n > 0){
      r = n%10;
      sum = sum + (r*r);
      n = n/10;
 }
  return sum;
 }
 void print(int n){
     int a = n;
     while(a != 1 && a != 4)
        a = check(a);
     if(a == 1)
       cout<<n<<" is a happy number";
     else
       if(a==4)
          cout<<n<<" is not a happy number";
 }
 int main(){
   int n;
   cout<<"Enter the number"<<endl;
   cin>>n;
   print(n);
   return 0;
 }