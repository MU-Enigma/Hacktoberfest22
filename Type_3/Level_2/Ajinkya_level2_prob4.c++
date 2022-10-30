#include<bits/stdc++.h>
using namespace std;

int main() {
    string input; 
    getline(cin, input);
    int k; cin >> k;

    stringstream ss(input);
    vector<int> vec((istream_iterator<int> (ss)), istream_iterator<int> ());
    
    int index, n = vec.size();
    for(int i = 0; i < n; i++) {
        if(vec[i] == k) { 
            index = i; break;
        }
        index = -1;
    }

    vec.erase(vec.begin() + index);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
}