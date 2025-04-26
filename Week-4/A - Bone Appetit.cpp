#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n , m , x ,y;

    cin >> n >> m>> x>>y;

    int bons= n*x;

    int blood = m* y;

    int treat = bons + blood;

    cout << treat<<endl;

    return 0;
}