#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;


    
    while (q--)
    {
        int n;
        string t;
        cin >> n >> t;

        string result = "";
        for (int i = n - 1; i >= 0;)
        {
            if (t[i] == '0')
            {

                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                result += char('a' + num - 1);
                i -= 3;
            }
            else
            {

                int num = t[i] - '0';
                result += char('a' + num - 1);
                i -= 1;
            }
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}
