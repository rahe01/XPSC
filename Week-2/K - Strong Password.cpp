#include <iostream>
#include <string>
using namespace std;


int typtime(const string &s) {
    int time = 2;
    for (size_t i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int max_time = -1;
        string best_string;

        for (size_t i = 0; i <= s.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string new_s = s.substr(0, i) + c + s.substr(i);
                int time = typtime(new_s);
                if (time > max_time) {
                    max_time = time;
                    best_string = new_s;
                }
            }
        }

        cout << best_string << endl;
    }

    return 0;
}
