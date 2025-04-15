#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;


    vector<string> arr;
    set<string> seen;

    map<int , string , greater<int>> mp;


    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        
        

        mp[i] = s;
    }

    for(auto it : mp){

        if(seen.find(it.second) == seen.end()){
            seen.insert(it.second);
            arr.push_back(it.second);

        }
        
    }

    for(auto it : arr){
        cout << it << endl;
    }

  


   

    














    return 0;
}