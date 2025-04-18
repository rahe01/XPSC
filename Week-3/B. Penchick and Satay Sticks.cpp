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


        vector<int> arr(n);
        for(int i =0 ; i< n  ; i++){

            cin >> arr[i];
        }


        for(int i =1 ; i<n ; i++){

            if(arr[i] - arr[i-1] == -1){
                swap(arr[i] , arr[i-1]);
            }
        }


        cout <<( is_sorted(arr.begin() , arr.end()) ? "YES" : "NO") << endl;


    }
    

    return 0;
}