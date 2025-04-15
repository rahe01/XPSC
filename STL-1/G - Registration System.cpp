#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int n;
    cin >> n;
    unordered_map<string , int> count;
    while(n--){
        string s;
        cin >> s;

       
       if(count.find(s) == count.end()){
        cout << "OK" << endl;
        count[s] = 1;
       }
       else{
        cout << s << count[s] << endl;
        count[s]++;
       }

    }






    return 0;
}