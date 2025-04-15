#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<char> result;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {

                for (int j = result.size() - 1; j >= 0; j--)
                {
                    if (islower(result[j]))
                    {
                        result.erase(result.begin() + j);
                        break;
                    }
                }
            }
            else if (s[i] == 'B')
            {

                for (int j = result.size() - 1; j >= 0; j--)
                {
                    if (isupper(result[j]))
                    {
                        result.erase(result.begin() + j);
                        break;
                    }
                }
            }
            else
            {
                result.push_back(s[i]);
            }
        }

        for (char c : result)
            cout << c;
        cout << '\n';
    }

    return 0;
}
