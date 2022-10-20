#include<bits/stdc++.h>

using namespace std;

int concatt(int num) {

    int sum = 0;
    while (num) {

        int digit = num % 10;
        num = num / 10;
        sum += digit * digit;
    }

    return sum;
}

bool solu(int num, set<int> &st ) {

    while (num > 1 && st.find(num) == st.end()) {

        st.insert(num);
        num = concatt(num);
    }
    if (num == 1) return true;

    return false;


}

int main() {

    int num;
    cout<<"Enter Number: ";
    cin>>num;

    set<int> st;
    bool res = solu(num, st);
    if (res) {
        cout<<"true"<<endl;
    }else {
        cout<<"false"<<endl;
    }

    return 0;
}