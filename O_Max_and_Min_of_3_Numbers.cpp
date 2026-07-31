#include <iostream>
using namespace std;
int main(){
int a,b,c;
cin >> a>>b>>c;
if (a<b && a<c) {
    cout << "Min = " << a << endl;
}
else if (b<c && b<a){
    cout << "Min = " << b << endl;
}
else if (c<a && c<b){
    cout << "Min = " << c << endl;
}
if(a > b && a > c)
{
    cout << "Max = " << a << endl;

}
else if (b>a && b>c)
{
cout << "Max = " << b<< endl;

}

else if (c>a && c>b){
cout << "Max = " << c << endl;
}
}