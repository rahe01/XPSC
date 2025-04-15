#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

using ll = long long;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        ll initial = 0;
        vector<ll> arr;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                initial += i;
                arr.push_back((n - i - 1) - i);
            } else {
                initial += (n - i - 1);
                arr.push_back(i - (n - i - 1));
            }
        }

        sort(arr.rbegin(), arr.rend());  

        vector<ll> result(n);
        ll curr = initial;

        for (int k = 0; k < n; ++k) {
            if (k < arr.size() && arr[k] > 0) {
                curr += arr[k];
            }
            result[k] = curr;
        }

        for (ll val : result) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
