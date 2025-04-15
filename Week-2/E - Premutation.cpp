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

        vector<vector<int>> arr(n, vector<int>(n - 1));
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                    freq[arr[i][j]]++;
            }
        }

        int first = 0, maxFreq = 0;
        for (auto [num, f] : freq)
        {
            if (f > maxFreq)
            {
                maxFreq = f;
                first = num;
            }
        }

        vector<int> p;
        p.push_back(first);

        for (auto row : arr)
        {
            if (row[0] != first)
            {
                for (auto x : row)
                    p.push_back(x);
                break;
            }
        }

        for (int val : p)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}
