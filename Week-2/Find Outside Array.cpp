#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_set<int> present;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            present.insert(a[i]);
        }

        bool found = false;

        // We check all pairs (i, j) such that a[i] + a[j] is not present in the array
        for(int i = 0; i < n && !found; i++){
            for(int j = 0; j < n; j++){
                int sum = a[i] + a[j];
                // Check if sum is not present in the array and also allow same elements
                if(present.find(sum) == present.end()){
                    cout << a[i] << " " << a[j] << "\n";
                    found = true;
                    break;
                }
            }
        }

        if(!found){
            cout << "-1\n";
        }
    }

    return 0;
}
