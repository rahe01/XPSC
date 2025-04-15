#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;

        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        unordered_set<int> seen;
        int count = 0;

        for (int i = a - 1; i >= 0; i--)
        {
            if (seen.find(arr[i]) != seen.end()) {
                break;
            }
            seen.insert(arr[i]);
            count++;
        }

        cout << a - count << endl;
    }

    return 0;
}
