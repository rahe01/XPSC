#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int h, x, y;

        cin >> h >> x >> y;

        int normal_atacks = (h + x - 1) / x;

        int remain_health = h - y;
        int total_atacks;

        if (remain_health <= 0)
        {
            total_atacks = 1;
        }
        else
        {
            total_atacks = 1 + (remain_health + x - 1) / x;
        }

        int result = min(normal_atacks, total_atacks);
        cout << result << endl;
    }

    return 0;
}
