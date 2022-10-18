#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
        
    vector<vector<int>> ans;
    
    for(int i=1; i<=numRows; i++){
        vector<int> row(i);
        row[0] = 1;
        
        for(int j=1; j<i-1; j++){
            row[j] = ans.back()[j-1] + ans.back()[j];
        }
        row[i-1] = 1;
        ans.push_back(row);
    }
    
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> ans = generate(n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] <<  ' ';
        }
        cout <<endl;
    }
}