#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;

    cin >> t;

    while(t--){

        int n, k , l;

        cin >> n>> k >> l;

        vector<int> vailidsong;

        for(int i=0 ; i< n ; i++){

            int length , lan;
            cin >> length >> lan;

            if(lan == l){
                vailidsong.push_back(length);
            }
          

        }


        if(vailidsong.size() < k){
            cout << "-1"<< endl;
        }

        else{
            sort(vailidsong.rbegin() , vailidsong.rend());

            int sum = 0;

            for(int i = 0; i< k ; i++){

                sum += vailidsong[i];
            }

            cout << sum << endl;
            
        }

     









    }

    return 0;
}