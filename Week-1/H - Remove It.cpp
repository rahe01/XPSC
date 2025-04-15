#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n >> x;

     vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a != x)
        {
            arr.push_back(a);
        }
    }


    for(int i = 0 ; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }



    return 0;
}