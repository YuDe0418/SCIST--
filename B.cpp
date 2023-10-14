#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    //a+b, a−b, a×b, ⌊a/b⌋, amodb, a^2+b^2
    cout << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b << ' ' << a % b << ' '<< a*a + b*b << ' ';
    return 0;
}