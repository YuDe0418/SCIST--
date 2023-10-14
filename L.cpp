#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define FOR(i,a,b) for(int i = a; i<b; i++)

int main(){
    YuDe;
    int n,q; cin >> n >> q;
    int a[n+1];
    FOR(i,1,n+1) cin >> a[i];
    int sum[n+1];
    sum[0] = 0;
    FOR(i,1,n+1){
        sum[i] = sum[i-1] + a[i];
    }
    int l, r;

    while(q--){
    cin >> l >> r;
    cout << sum[r] - sum[l-1] <<'\n';
    }   
    return 0;
}

