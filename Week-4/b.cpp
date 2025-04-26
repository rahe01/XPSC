#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }



        int total_cost = 0;

        for (int i = 0; i < n; ++i)
        {
            int normal_cost = A[i] * x;
            total_cost += min(normal_cost, y);
        }

        cout << total_cost << endl;
        
    }
    return 0;
}
