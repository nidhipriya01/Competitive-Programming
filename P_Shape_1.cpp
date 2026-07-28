#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // example: n = 4

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
