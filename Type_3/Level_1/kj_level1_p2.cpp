#include <bits/stdc++.h>

using namespace std;

bool happyNumber(int num) {

    if (num == 1) return true;
    else if (num == 4) return false;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += (digit * digit);
        num = num / 10;
    }
    happyNumber(sum);
}

int main() {
    int num;
    cin >> num;

    if (happyNumber(num)) cout << "true" << endl;
    else cout << "false" << endl;
}