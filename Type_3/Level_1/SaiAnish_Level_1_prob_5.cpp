#include <bits/stdc++.h>

using namespace std;

void reverse(string s){
    int front=0,back=s.length()-1;
    for (int i = 0; i < s.length(); i++)
    {
        while(front<back){
            swap(s[front],s[back]);
            front++; 
            back--;
        }
    }
    cout<<s;
}

int main(){
    string s;
    getline(cin>>ws,s);    
    // cout<<s;
    reverse(s);
}