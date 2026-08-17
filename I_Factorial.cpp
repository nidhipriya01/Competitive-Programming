#include <iostream>
using namespace std;
int main (){
 long long int i,n,fact=1;
cin >> n ;

for(i=1;i<=n;i++){
fact=fact*i;
}
cout << fact << endl;
return 0;

}