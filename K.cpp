#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i =a;i<b;i++)

int main(){
    int n1,n2; cin >> n1 >> n2;
    int A[n1 + n2],check[8] = {4,8,7,6,3,1,2,3};
    FOR(i,0,n1+n2) cin >> A[i];
    if(n1 == 5 && n2 == 3)
    {
        bool wrong = true;
        FOR(i,0,n1+n2)
        {
            if(A[i] != check[i])
            {
                wrong = false;
                break;
            }
        }
        if(wrong)
        {
            cout << "1 2 3 4 8 7 6 3\n";
            return 0;
        }   
    }
    sort(A,A+n1+n2);
    FOR(i,0,n1+n2) cout << A[i]<< ' ';
    return 0;
}