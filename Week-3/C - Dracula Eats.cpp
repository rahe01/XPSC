#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while(t--){

        int n;

        cin >> n;

        int cnt = 0;

        int day = 2;

        for(int i = 1 ; i <= n; i++){

            if(i == day){
                cnt++;
                day+=7;
            }
        }

        cout << cnt<<endl;





    }

    return 0;
}