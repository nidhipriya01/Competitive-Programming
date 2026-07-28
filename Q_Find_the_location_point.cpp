#include <iostream>
using namespace std;
int main(){
int a,b;
 cin >> a>>b;
if(a==0 && b==0)
 cout<< "Origin" << endl;
  else if (a!=0&& b==0)
   cout << "X axis" << endl;
  else if(a==0&& b!=0)
   cout << "Y axis" << endl;
  else if (a>0 && b>0)
   cout << "1st Quadrant" << endl;
  else if(a<0&& b<0)
  cout << "3rd Quadrant" << endl;
  else if (a>0 && b<0)
  cout << "4th Quadrant"<< endl;
else 
 cout << "2nd Quadrant" << endl;

return 0;
}