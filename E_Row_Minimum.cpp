#include <iostream>
using namespace std;
int main(){

    int n,m,i;

    cin >> n >> m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> arr[i][j];
        }
     }
    for (int i=0;i<n;i++){
     int ans =  arr[i][0];
    
        for (int j=0;j<m;j++){
            if (arr[i][j]<ans){
                ans = arr[i][j];
            
        }
    }
    
    cout << ans << " ";
    
}

}

