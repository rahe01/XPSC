#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        int reduced_size = n / k;
        vector<string> reduced(reduced_size, string(reduced_size, '0'));

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {

                reduced[i / k][j / k] = grid[i][j];
            }
        }

        for (string &row : reduced)
        {
            cout << row << '\n';
        }
    }

    return 0;
}
