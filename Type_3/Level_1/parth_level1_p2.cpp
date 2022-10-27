#include <bits/stdc++.h>

using namespace std;

bool happyNumber(int n) {

    if (n == 1) return true;
    else if (n == 4) return false;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += (digit * digit);
        n = n / 10;
    }
    happyNumber(sum);
}

int main() {
    int num;
    cin >> num;

    if (happyNumber(num)) cout << "true" << endl;
    else cout << "false" << endl;
}