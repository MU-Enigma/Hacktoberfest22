#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

    for(auto i=0; i<x; i++){
        if(v[i]==-3){
            x--;
            for(int j=i; j<x; j++){
                v[j]=v[j+1];
            }
        }
    }
    
    vector<int>v1(x);

    for(int i=0; i<x; i++){
        int count=0;
        for(int j=i+1; j<x; j++){
            if(v[i]>v[j]){
                count++;
            }
        }
        v1[i]=count;
    }
    
    cout<<"[";
    
    for(int i=0; i<x; i++){
        cout<<v1[i]<<"";
        if(i<x-1){
            cout<<",";
        }
    }
    cout<<']';
}
