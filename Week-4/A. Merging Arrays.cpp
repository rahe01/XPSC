#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,m;
    cin >> n>>m;

    vector<int> a(n) , b(m);

    for(int i=0 ; i<n ;i++){
        cin >> a[i];
    }
    for(int i=0 ; i<m ;i++){
        cin >> b[i];
    }



    vector<int> ans;

    int l =0, r=0;
   

    while (l<n && r<m)
    {
        if(a[l] < b[r]){
            ans.push_back(a[l]);
            l++;
        }

       else if(b[r] < a[l]){
            ans.push_back(b[r]);
            r++;
        }

        else if(a[l] == b[r]){
            ans.push_back(a[l]);
            ans.push_back(b[r]);
            l++;r++;
        }

        
    }

    while(l<n){
        ans.push_back(a[l++]);
    }

    while(r<m){
        ans.push_back(b[r++]);
    }

    for(int i =0; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }
    









    return 0;
}