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

        string s;
        cin >> s;

        unordered_set<char> unique_chr(s.begin(), s.end());

        vector<char> r(unique_chr.begin(), unique_chr.end());
        sort(r.begin(), r.end());

        map<char, char> decode_map;
        int len = r.size();
        for (int i = 0; i < len; ++i)
        {
            decode_map[r[i]] = r[len - 1 - i];
        }

        string e = "";
        for (char ch : s) {
            e += decode_map[ch];
        }

        
        cout << e << endl;
    }
    return 0;
}