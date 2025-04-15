#include <bits/stdc++.h>

using namespace std;

int main()
{

    int k, n, w;

    cin >> k >> n >> w;

    int price = k;

    for (int i = 2; i <= w; i++)
    {

        price += (k * i);
    }

    int main = price - n;

    if (main <= 0)
    {

        cout << 0;
    }
    else
        cout << main;

    return 0;
}