#include <bits/stdc++.h>

using namespace std;

int sumofsquare(int n){
    int sum=0;
    int rem;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
    return sum;
}

int happynumber(int n){
    int n1=n;
    int n2=sumofsquare(n);
    while(n1!=n2){
        n1=sumofsquare(n1);
        n2=sumofsquare(sumofsquare(n2));
    }
    if(n2==1)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    cin>>n;
    int ans=happynumber(n);
    if(ans==1)
        cout<<"true";
    else 
        cout<<"false";
}