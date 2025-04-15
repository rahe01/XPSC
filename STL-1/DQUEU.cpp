#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    cin >> n;
    deque<int> dq;
    
    for(int i =0; i<n; i++){

        // int x; 
        // cin >> x;

        // dq.push_back(x);

        cin >> dq[i];
    }

    dq.push_front(7);

    for(auto val : dq){
        cout << val;
    }

    dq.pop_front();
    return 0;
}