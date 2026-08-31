#include <iostream>
using namespace std;
int main(){
 long long int m,n,i,j;
cin>>m >>n>>i>>j;
for (i=1;i<=m;i++)
{
    for (j=1;j<=n;j++)
    {
        if(i==1 or i==m or j==1 or j==n)
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