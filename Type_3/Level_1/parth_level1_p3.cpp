#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "enter size->";
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];

    for (int i=0;i<n;i++) {
        bool ans = true;
        for (int j=0;j<n;j++) {
            if (i == j) continue;
            if (arr[i] == arr[j]) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << arr[i] << endl;
            break;
        }
    }
}