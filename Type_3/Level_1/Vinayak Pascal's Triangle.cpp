#include <iostream>

using namespace std;

int main()
{
    int num;
    int start(1);
    long NUM(11);//assign the first number as 1
    cout<<"Enter the number of lines to print: ";
    cin>>num;
    cout<<start<<endl;
    for(int i=0;i<num;i++){
        NUM=NUM*11;
        cout<<NUM<<endl;
    }
    return 0;
}
