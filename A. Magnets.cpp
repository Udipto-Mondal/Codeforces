#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0; 
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) { 
        if (a[i] != a[i+1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
