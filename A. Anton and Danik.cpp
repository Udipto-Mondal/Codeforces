#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int counta = 0, countb = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            counta++;
        } else if (s[i] == 'D') {
            countb++;
        }
    }

    if (counta > countb) {
        cout << "Anton" << endl;
    } else if (countb > counta) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
