#include <iostream>
using namespace std;
int main(){
 long long int m,n,i,j;
cin>>n>>i>>j;
for (i=1;i<=n;i++)
{
    for (j=1;j<=n;j++)
    {
        if(i==1 or i==n or j==1 or j==n)
        {
            cout <<"*";

        }
    
        else
        {
            cout << " ";
        }
    
    }

cout << endl;

    }
}