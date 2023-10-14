#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    int min = 1e3 + 1, max = 0, sum = 0;
    for (int i = 0; i<n; i++){
        int x ;cin >> x;
        if (x < min){
            min = x;
        }
        if(x > max){
            max = x;
        }
        sum += x;
    }
    sum -= max + min;
    int Aon = sum /(n-2);
    cout << Aon;
}