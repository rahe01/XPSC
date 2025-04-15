#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {

        int n, m;

        cin >> n >> m;

        string s;

        cin >> s;


        for(int i = 0; i < n - 1 && m > 0 ; i++){
            if(s[i] == '0' && s[i+1] == '1'){

                s[i] = '1';
                m--;
                i = -1;
            }
        }

        int count1 = count(s.begin() , s.end() , '1' );

        cout << count1 << endl;




    }
    return 0;
}