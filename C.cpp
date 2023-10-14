#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int A[5] = {4,8,7,6,3};
    cin >> n;
    cout << A[n % 5]<< ' ' ; 
    A[n % 5] += n;
    cout << A[A[n % 5] % 5]<< ' ';
    A[A[n % 5] % 5] += n;
    cout << A[0] * A[1] * A[2] * A[3] * A[4];


}
