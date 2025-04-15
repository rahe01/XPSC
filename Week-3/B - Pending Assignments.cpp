#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;

    cin >> t;

    while(t--){

        int x , y , z;

        cin >> x >> y >> z;

        long long total = x * y;

        long long totalmin = z * 1440;

        if(total > totalmin){
            cout << "NO" << endl;
        }

        else{
            cout << "YES" << endl; 
        }





    }
    

    return 0;
}