#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define FOR(i,a,b) for(int i = a; i<b; i++)

int main(){
    YuDe;
    int n; cin >> n;
    int dp[10]={};
    dp[1] = 1; dp[2] = 2; dp[3]=4;
    FOR(i,4,n+1){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

    }
    cout << dp[n];
}

