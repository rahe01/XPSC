
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int r , c;

    cin >> r >> c;

    int sum = r+c;

    int fresh = 7 - sum;

    cout << fresh<<endl;

    return 0;
}