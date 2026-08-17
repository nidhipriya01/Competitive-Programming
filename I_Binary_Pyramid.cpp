#include <iostream>
using namespace std;
int main(){
 long long int n,m,i,j;
cin >> n;
for (i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
{
    cout <<(i+j)%2;
}
cout << endl;
}

}


