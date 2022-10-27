#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;  
    getline(cin, input);
    stringstream s(input);

    vector<int> vec((istream_iterator<int> ( s )), istream_iterator<int> () );
    int n = vec.size(), a = 0, b = n-1;

    sort(vec.begin(), vec.end());
    for(int i = 1; i < n; i++) {
        while(b > a and i < b) {

            if(vec[a] + vec[i] + vec[b] == 0) {
                cout << "[" << vec[a] << "," << vec[i] << "," << vec[b] << "]" << endl;
                break;
            }
            else if (vec[a] + vec[i] + vec[b] < 0) {
                a++; break;
            }
            else if (vec[a] + vec[i] + vec[b] > 0) {
                b--; 
            }
        }
    }
}