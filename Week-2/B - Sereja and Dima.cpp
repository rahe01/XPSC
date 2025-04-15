#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool turn = true; 

    while (l <= r) {
        if (arr[l] > arr[r]) {
            if (turn)
                sereja += arr[l++];
            else
                dima += arr[l++];
        } else {
            if (turn)
                sereja += arr[r--];
            else
                dima += arr[r--];
        }
        turn = !turn; 
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
