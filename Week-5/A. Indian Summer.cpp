#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    map<string, string> mp;

    int count = 0;

    while (t--)
    {

        string s1, s2;

        cin >> s1 >> s2;

        if (mp.find(s1) == mp.end() || mp[s1] != s2)
        {
            mp[s1] = s2;
            count++;
        }
    }

    cout << count;

    return 0;
}