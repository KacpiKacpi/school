#include <iostream>

using namespace std;

int main()
{
    int a, b, c,d;
    cout<<"a= ";cin>>a;
    d=a;
    cout<<"b= ";cin>>b;
    if(b>d)d=b;
    cout<<"c= ";cin>>c;
    if(c>d)d=c;
    if(d<(a+b+c-d))cout<<"TAK";
    else cout<<"NIE";
    return 0;
}
