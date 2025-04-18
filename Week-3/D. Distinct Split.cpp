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
        cin >> n;

        string s;
        cin >> s;

        int mid = n /2;
        int midd = mid ;

        string firsthalf = s.substr(0 , midd);

        string secondhalf = s.substr(midd);

        cout << firsthalf << " "<< secondhalf << endl;

      
    }

    return 0;
}