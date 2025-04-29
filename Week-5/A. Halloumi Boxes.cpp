#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;

    cin >> t;

    while(t--){
        int n,m;

        cin >> n>>m;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }


        if(m>=2){
            cout << "YES" << endl;
        }


        else{

            vector<int> test = arr;

            sort(test.begin(), test.end());

            if(test == arr){
                cout << "YES"<<endl;
            }

            else{
                cout << "NO"<< endl;
            }




        }
    }

    return 0;
}