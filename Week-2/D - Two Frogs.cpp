#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
    
        if (a > b) swap(a, b);
    
        int distance = b - a;
        
        if (distance == 1) {
            cout << "NO" << endl; 
        } else {
            if (distance % 2 == 1) {
                cout << "NO" << endl; 
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
