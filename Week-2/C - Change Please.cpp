#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int tk;
        cin >> tk;

        int change = 100 - tk ;
        int change1 = change/10;
        int change3 = change1*10;
        cout << change3  << endl;
    }

    return 0;
}
