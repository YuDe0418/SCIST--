#include <bits/stdc++.h>
using namespace std;

int main(){
   
    vector<int> v;
    for (int i = 0; i<3; i++){
        int n; cin >>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());

    if ((v[0] + v[1]) > v[2] && abs(v[0] - v[1]) < v[2]){
        if (v[0] == v[1] && v[1] == v[2]){
            cout << "Equilateral triangle";
        }
        else if((v[0] == v[1] && v[0] < v[2]) ||( v[1] == v[2] && v[2] > v[0])){
            cout << "Isosceles triangle";
        }
        else{
            cout << "Scalene triangle";
        }
    }
    else {
        cout << "OAO";
    }
}