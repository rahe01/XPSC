#include <bits/stdc++.h>

using namespace std;

int main(){
    string a , b;

    cin >> a >> b;


    int minsize = min(a.size() , b.size());

    int count = 0;

    for(int i = 0; i<= minsize ; i++){

        if(a[i] != b[i]){
            count++;
        }
    }


    cout << count;
    return 0;
}