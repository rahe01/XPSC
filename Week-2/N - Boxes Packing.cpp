#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    int maxFreq = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
        maxFreq = max(maxFreq, freq[a]);
    }

    cout << maxFreq << '\n';
    return 0;
}
