#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string numstr;
        cin >> numstr;
        int length = numstr.size();
        bool nonzero = false;
        int countzero = 0;

        for (int i = length - 1; i >= 0; --i)
        {
            if (numstr[i] != '0')
            {
                nonzero = true;
            }
            else if (nonzero)
            {
                countzero++;
            }
        }

        cout << length - (countzero + 1) << '\n';
    }

    return 0;
}
