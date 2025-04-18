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

        queue<char> qq;
        for (int i = 0; i < n; i++)
        {
            qq.push(s[i]);
        }

        int girl = 0;
        int boy = 0;

        while (!qq.empty())
        {
            char val = qq.front();

            if (val == 'G')
            {
                girl++;
                qq.pop();
            }
            else  if (val == 'B')
            {
              boy++;

              qq.pop();
              if(boy> girl *2){
                break;
              }
            }
        }

        int ans = girl + boy;
        cout << ans << endl;
    }

    return 0;
}
