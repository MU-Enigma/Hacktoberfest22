#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "size:";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];

    for (int i=0;i<n;i++) {
        bool single = true;
        for (int j=0;j<n;j++) {
            if (i == j) continue;
            if (arr[i] == arr[j]) {
                single = false; // 4 2 4 1 2
                break;
            }
        }
        if (single) {
            cout << arr[i] << endl;
            break;
        }
    }
}