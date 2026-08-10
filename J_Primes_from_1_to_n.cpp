#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    int lim = sqrt(x);
    for (int d = 3; d <= lim; d += 2) {
        if (x % d == 0) return false;
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}
