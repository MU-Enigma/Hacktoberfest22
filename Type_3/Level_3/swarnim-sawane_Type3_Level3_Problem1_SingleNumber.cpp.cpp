// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    vector<int> v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            /*int x=i,p=0;
            while(s[x+1]>='0' && s[x+1]<='9'){
                p++;
            }
            */
            v.push_back(s[i]-48);
        }
    }
    int x = v.size();
    sort(v.begin(),v.end());
    cout<<"[";
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it;
        if(it!=v.end()-1){
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}