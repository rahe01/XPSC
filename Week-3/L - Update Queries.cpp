#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> ind[i];
            ind[i]--;
        }

        string c;
        cin >> c;

        vector<pair<int, char>> ops;
        for (int i = 0; i < m; ++i)
        {
            ops.push_back({ind[i], c[i]});
        }

        sort(ops.begin(), ops.end());

        int i = 0;
        while (i < ops.size())
        {
            int idx = ops[i].first;
            vector<char> chars;
            while (i < ops.size() && ops[i].first == idx)
            {
                chars.push_back(ops[i].second);
                i++;
            }
            sort(chars.begin(), chars.end());
            s[idx] = chars[0];
        }

        cout << s << '\n';
    }

    return 0;
}
