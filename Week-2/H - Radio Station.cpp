#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<pair<string, string>> firsts(n);
    vector<pair<string, string>> seconds(m);

    for(int i= 0; i<n; i++){
        cin >> firsts[i].first >> firsts[i].second;
    }

    for(int i=0; i< m; i++){
        cin >> seconds[i].first >> seconds[i].second;
    }



   unordered_map<string,string> ipToName;

   for(auto [name , ip] : firsts){

    ipToName[ip] = name;
   }


   for(auto [cmd , rawIp]: seconds){
    string ip = rawIp.substr(0, rawIp.size() -1);
    cout << cmd << " " << rawIp << " #" << ipToName[ip]<<endl; 
   }

    

    return 0;
}
