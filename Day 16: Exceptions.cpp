#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    try {
        int num;
        num=stoi(S);
        cout<<num<<endl;
    }
    catch(exception e) {
        cout<<"Bad String";
    }
    return 0;
}
