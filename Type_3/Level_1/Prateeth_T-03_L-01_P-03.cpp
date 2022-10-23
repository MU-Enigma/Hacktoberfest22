#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    
    string st;
    vector<int>v;
    int x=0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='[' || s[i]==']' || s[i]==','){
            continue;
        }
        else{
            st[x++]=s[i];
        }
    }
    for(int i=0; i<x; i++){
        v.push_back(st[i]-48);
    }

    map<int,int>m;
    
    for(int i=0; i<x; i++){
        m[v[i]]++;
    }
    
    for(auto i:m){
        if(i.second==1){
            cout<<i.first;
        }
    }
}
