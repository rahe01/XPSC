#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;

    cin >> t;

    while(t--){

        int n , k;

        cin >> n>>k;

        string s;
        cin >> s;


        int cnt =0;
        for(int i =0; i<k ; i++){
            if(s[i] == 'W'){
                cnt++;
            }
        }

        cout << cnt<<endl;
        






    }

    return 0;
}