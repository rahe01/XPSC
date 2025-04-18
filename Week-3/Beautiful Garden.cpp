#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> t(n);
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
        }

        sort(t.begin(), t.end());

        vector<int> regrow_days(n, 0);

        int plucks = 0;

        for (int day = 1; day <= d; day++)
        {
            int bloom = 0;

            for (int i = 0; i < n; i++)
            {
                if (regrow_days[i] <= day)
                {
                    bloom++;
                }
            }

            if (bloom > k)
            {

                for (int i = 0; i < n; i++)
                {
                    if (regrow_days[i] <= day)
                    {
                        plucks++;
                        regrow_days[i] = day + t[i];
                        break;
                    }
                }
            }
        }

        cout << plucks << endl;
    }

    return 0;
}
