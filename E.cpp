#include <bits/stdc++.h>
using namespace std;

int main(){
    string N = "Scist";
    int n;
    cin >> n;
    if (n % 5 == 0){
        cout << N[4];
    }
    else{
        cout << N[n % 5 - 1];
    }
}