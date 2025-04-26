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

        vector<int> freq(101, 0);

        int minval = 101, maxval = 0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            freq[x]++;
            minval = min(minval, x);
            maxval = max(maxval, x);
        }

        int goodCount = 0;

        for (int x = 1; x <= 100; x++)
        {

            bool small = false, large = false;

            for (int i = 1; i < x; i++)
            {
                if (freq[i])
                {

                    small = true;

                    break;
                }
            }
            for (int i = x + 1; i <= 100; i++)
            {

                if (freq[i])
                {
                    large = true;

                    break;
                }
            }

            if (small && large)
            {
                goodCount++;
            }
        }

        cout << goodCount << endl;
    }
    return 0;
}
