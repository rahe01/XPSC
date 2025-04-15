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

        unordered_map<string, long long> freq;


        long long ans = 0;

        for (int i = 0; i < n; ++i)
        {
            string s;
            
            cin >> s;

            


            for (char ch = 'a'; ch <= 'k'; ++ch)
            {
                if (ch != s[0])
                {
                    string temp = s;
                    temp[0] = ch;

                    ans += freq[temp];
                }
            }

           


            for (char ch = 'a'; ch <= 'k'; ++ch)
            {
                if (ch != s[1])
                {
                    string temp = s;

                    temp[1] = ch;

                    ans += freq[temp];
                }
            }

        
            freq[s]++;
        }




        cout << ans << "\n";
    }

    return 0;
}
