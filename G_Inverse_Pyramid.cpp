#include <iostream>
using namespace std;
int main(){
 long long int n,i,j;
cin >>n>>i>>j;
for (i=1;i<=n;i++)
{
    for (j=0;j<=n-i;j++)
        {
            cout <<"*";

        }

    

cout << endl;

    }
}