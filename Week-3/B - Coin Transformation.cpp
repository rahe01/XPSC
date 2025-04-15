#include <bits/stdc++.h>

using namespace std;



unordered_map<long long, long long> counnt;

long long maxcoin (long long n){

    if(n <= 3){
        return 1;
    }

    if(counnt.count(n)){
        return counnt[n];
    }

    long long halfcoin = maxcoin(n/4);

    counnt[n] = max(1LL , 2 * halfcoin);

    

    return counnt[n];

}



int main(){
    

    int t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        cout << maxcoin(n) << endl;

    }







    return 0;
}