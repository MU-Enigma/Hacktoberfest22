#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int x = s.size()-1;
    int n = x+1;
    for(int i=0; i<n/2; i++){
        char temp = s[i];
        s[i] = s[x-i];
        s[x-i] = temp;
    }
}

int main(){
    string s;
    getline(cin, s);

    vector<char> str;

    for(int i=0; i<s.size(); i++){
        str.push_back(s[i]);
    }

    reverseString(str);
    for(int i=0; i<str.size(); i++){
        cout << str[i];
    }
    cout << endl;

    return 0;
}