#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long w;
        cin >> n >> w;

        map<int, int> freq;
        for (int i = 0; i < n; ++i)
        {
            int w;
            cin >> w;
            freq[w]++;
        }

        int height = 0;
        while (n > 0)
        {
            long long remain = w;

            for (auto it = freq.rbegin(); it != freq.rend(); ++it)
            {
                int width = it->first;
                int &count = it->second;
                int fit = min((long long)count, remain / width);
                remain -= (long long)fit * width;
                count -= fit;
                n -= fit;
            }

            height++;
        }

        cout << height << "\n";
    }

    return 0;
}
