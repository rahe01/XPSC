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
        int a, b, c;
        cin >> a >> b >> c;

        int maxss = 0;

        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= 5; j++)
            {
                for (int k = 0; k <= 5; k++)
                {
                    if (i + j + k <= 5)
                    {
                        int a1 = a + i;
                        int b1 = b + j;
                        int c1 = c + k;

                        int mul = a1 * b1 * c1;
                        maxss = max(maxss, mul);
                    }
                }
            }
        }

        cout << maxss << '\n';
    }

    return 0;
}
