#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        long long ans = 0;
        priority_queue<int> buffs;

        for (int e : s)
        {
            if (e > 0)
            {
                buffs.push(e);
            }
            else if (!buffs.empty())
            {
                ans += buffs.top();
                buffs.pop();
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
