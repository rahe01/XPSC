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

        int total =0;
        for (int i = 0; i < n; i++)
        {

            int a;

            cin >> a;

            if(a >= 2){
                total+= (a-1);
            }

            
        }

        cout << total << endl;
    }

    return 0;
}