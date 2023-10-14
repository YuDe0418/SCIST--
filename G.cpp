#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin >> n;
    int A[n];int B[n];
    FOR(i,0,n) cin >> A[i];
    FOR(i,0,n) cin >> B[i]; 
    FOR(i,0,n) cout << A[i]+B[i] << ' ';
    return 0;
}