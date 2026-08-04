#include <iostream>
using namespace std;

int main() {
    long long int n, x;
  cin>>n;

    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cin >> x; // Read target element to search

    // 2. Binary Search Logic
   int l = 0;
   int r = n - 1;
    bool found = false; // FIX: Declare and initialize found variable

    while (l <= r) {
         int mid = l + (r- l) / 2; // Prevents potential overflow

        if (arr[mid] == x) {
            found = true;
            break;
        } else if (arr[mid] > x) {
            r = mid - 1; // FIX: Search left half
        } else {
            l = mid + 1; // FIX: Search right half
        }
    }

    // 3. Print Result
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
