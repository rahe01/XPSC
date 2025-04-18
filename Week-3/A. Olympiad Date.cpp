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

        for(int i =0; i< n; i++){

            cin >> arr[i];
        }


        int zero= 3;
        int one = 1;
        int two = 2;
        int three  = 1;

        int five = 1;

        int index =0;

        for(int i =0 ; i< n; i++){

            if(arr[i] == 0){
                zero--;
            }
            else if(arr[i] == 1){
                one--;
            }

            else if(arr[i] == 2){
                two--;
            }

            else if(arr[i] == 3){
                three--;
            }

            else if(arr[i] == 5){
                five--;
            }


          
            if(zero <= 0 && one <= 0 && two <= 0 && three <= 0 && five <= 0){
                index = i+1;
                break;
            }





        }

        cout << index << endl;





    }

    return 0;
}