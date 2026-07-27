#include <bits/stdc++.h>
using namespace std;

int main() {
std:: ios:: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int l1,r1,l2,r2;
cin >> l1>> r1>> l2>> r2;
if(r2<l1|| l2 > r1)
{

    cout<< -1<< endl;}
    else {
    

 
int l = max (l1,l2);
int r= min (r1,r2);
cout << l<< " " << r<< endl;
return 0;}






}