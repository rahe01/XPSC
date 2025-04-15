#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;

    cin >> n;

    vector<char> arr;

    while(n--){
        char c;

        cin >> c;
        arr.push_back(c);
    }

    int count = 0;

    for(int i = 0; i< arr.size(); i++){

        if(arr[i] == arr[i+1]){
            count ++;
        }
    }

    cout << count;


    return 0;
}