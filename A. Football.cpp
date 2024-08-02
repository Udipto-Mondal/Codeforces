#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int zero = 0, one = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            one++;
            zero = 0;
        } else {
            zero++;
            one = 0;
        }

        if (zero == 7 || one == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
