#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    vector<int> vec((istream_iterator<int> ( ss )), istream_iterator<int>());

    int n = vec.size();
    sort(vec.begin(), vec.end());

    for(int i = 0; i < n-1; i++) {
        cout << vec[i] << " -> ";
    }
    cout << vec[n-1] << endl;
}   