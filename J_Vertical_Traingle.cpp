#include <iostream>
using namespace std;
int main(){
long long int n,i,j,count=0;
cin >> n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        cout << "*" <<" " ;
    }
    cout << endl;

    }
     for(i=n-1;i>=1;i--){
        for (j=1;j<=i;j++){
            cout <<"*" <<" " ;
        }
        cout << endl;
     }
}





