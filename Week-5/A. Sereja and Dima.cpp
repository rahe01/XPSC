#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }



    int s = 0, d = 0;

    int l =0 , r =n- 1;


    int turn = true;

  while( l<= r){

    int chosen ;


    if(arr[l] > arr[r]){
        chosen = arr[l++];
    }

    else{
        chosen = arr[r--];
    }

    if(turn){
        s+= chosen;
    }

    else{
        d+= chosen;
    }

    turn = !turn;


  }

    cout << s << " " << d;

    return 0;
}