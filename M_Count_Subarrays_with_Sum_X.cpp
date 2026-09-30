#include<iostream>
#include<map>
using namespace std;

void checkSubarraySum(int arr[], int n, long long int k) {
    map< long long int, int>mp;
    long long int prefixsum=0;
      long long int count=0;
     mp[0] = 1; // Initialize the map with prefix sum 0 to handle cases where the subarray starts from index 0
    for (int i=0;i<n;i++){
        prefixsum += arr[i];
    
        
        if (mp.find(prefixsum - k) != mp.end() ) {
            count += mp[prefixsum - k];
        }
        mp[prefixsum]++;
    }
    cout << count;
}
int main() {
    int n;
    long long int k;
    cin >> n >> k;

    int arr[200005];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    checkSubarraySum(arr, n, k);
 return 0;
}