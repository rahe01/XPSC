#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int l_prim = max(l, r - m);
        int r_prim = l_prim + m;

        cout << l_prim << " " << r_prim << '\n';
    }

    return 0;
}
