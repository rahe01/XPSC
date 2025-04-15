#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);




    int n;
    cin >> n;

    set<string> arr;

    while(n--){

        string s;

        cin >> s;



        if(arr.find(s) == arr.end()){

            cout << "NO" << endl;
            arr.insert(s);

        }

        else {
            cout << "YES" << endl;
        }
    }







    return 0;
}