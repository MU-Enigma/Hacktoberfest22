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
 void display(int n){
     int a = n;
     while(a != 1 && a != 4)
        a = check(a);
     if(a == 1)
       cout<<n<<"True";
     else
       if(a==4)
          cout<<n<<"False";
 }
 int main(){
   int n;
   cin>>n;
   display(n);
   return 0;
 }
