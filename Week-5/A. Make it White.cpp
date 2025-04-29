#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >>t;


    while(t--){
        int n;

        cin >> n;

        string s;
        cin >> s;

        int l =0;
        int r = n-1;

        int count = 0;

        while(l<r){

            if(s[l] == 'W'){

                l++;
                count++;

            }

          else  if(s[r] == 'W'){
                r--;
                count++;
            }

            else{
                break;
            }




        }

        int ans = n -count;

        cout << ans<<endl;
    }

    return 0;
}