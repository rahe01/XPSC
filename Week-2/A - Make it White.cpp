#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n;

    while(n--){
        int t ;
        cin >> t;
        string s;
        cin >> s;


        int first = -1 , last =-1;

        for(int i=0; i< t; i++){
            if(s[i] == 'B'){
                if(first == -1){
                    first = i;
                    
                }
                last =i;
                
            }
        }
        

        int minlength = last - first +1;
        cout << minlength << endl;
    }



    return 0;
}