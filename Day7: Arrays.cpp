#include <bits/stdc++.h>

using namespace std;

void input(int A[], int n){
    int i;
    for(i = 0; i< n; i++){
        cin>>A[i];
    }
}

void display(int A[], int n){
    int i;
    for(i = n-1; i>=0; i--){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    int A[10000] = {0};
    cin>>n;
    input(A,n);
    display(A, n);

    return 0;
}
