#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long  x , sum =0 , minOdd = LLONG_MAX;

    cin >> x;

    while(x--){
        long long t;
        cin >> t;

        sum+= t;




        if(t%2 == 1){
            minOdd = min(minOdd , t);
        }
    }




    if(sum % 2 == 0){
        cout << sum;
    }

    else{
        
        cout << sum - minOdd ;
    }


    return 0;
}