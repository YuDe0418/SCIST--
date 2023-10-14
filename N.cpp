#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define FOR1(i,a) for (int i=1; i<=a;i++)

int main(){
    YuDe;
    int n; cin >> n;
    int a[n],sum[n+1],t;
    vector<int> v;
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n){
        cin >> t;
        if (t == a[i]) v.push_back(1);
        else v.push_back(0);
    }
    sum[0] = 0;
    FOR1(i,n){
        sum[i] = sum[i-1] + v[i-1];
    }
    int q; cin >> q;
    int l,r;
    while(q--){
    cin >> l >> r;
    cout << sum[r] - sum[l-1] <<'\n';
    }   
    return 0;

}

