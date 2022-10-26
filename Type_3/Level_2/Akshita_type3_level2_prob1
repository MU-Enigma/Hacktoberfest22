#include<bits/stdc++.h>
using namespace std;

void three_sum(vector<int> array) {
    
    sort(array.begin(), array.end());

    int n = array.size();
    int st = 0, l = n-1;
    for(int i = 1; i < n; i++) {
        while(l > st and i < l) {

            if(array[st] + array[i] + array[l] == 0) {
                cout << "[" << array[st] << "," << array[i] << "," << array[l] << "]" << endl;
                break;
            }
            else if (array[st] + array[i] + array[l] < 0) {
                st++; break;
            }
            else if (array[st] + array[i] + array[l] > 0) {
                l--; 
            }
        }
    }

}

int main() {
    string str;  
    getline(cin, str);
    stringstream s(str);

    vector<int> v ((istream_iterator<int> ( s )), istream_iterator<int> () );
    three_sum(v);

}