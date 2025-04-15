#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cin >> n;

    set<string> uniqueLeave;


    for (int i = 0; i < n; ++i) {

        string species, color;
        cin >> species >> color;
        
        uniqueLeave.insert(species + " " + color); 
    }

    cout << uniqueLeave.size() << endl;

    return 0;
}
