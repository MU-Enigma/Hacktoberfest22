#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int x = 0;
    for(int i=0; i<nums.size(); i++){
        x = x ^ nums[i];
    }
    return x;
}

int main(){
    string s;
    getline(cin , s);
    vector<int> array;

    int i = 0;
    string t = "";
    while(i < s.size()){
        if(s[i] == ' '){
            array.push_back(stoi(t));
            t = "";
        }
        else{
            t += s[i];
        }
        i++;
    }
    array.push_back(stoi(t));

    int ans = singleNumber(array);
    cout << ans << endl;
}