#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
   getline(cin, s);
    cin >> s;
int count = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
           count++;
        }
    }

    cout << count +1 << endl;
    return 0;
}