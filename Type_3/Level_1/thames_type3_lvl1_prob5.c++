#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 void reverse(string s){int i;
 for(i=s.length()-1;i>=0;i--)
   cout<<s[i];
}
 int main(){
   string s="";
   getline(cin,s);
   reverse(s);
 }
