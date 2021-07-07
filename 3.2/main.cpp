#include <iostream>
#include <string>

using namespace std;

int main()
{
    int  dec=0 , p=1;
    string b;
    cout << "Enter binary number: " ; cin>>b ; cout<<endl;
    for(int i = b.size()-1 ; i>=0  ; i--)
    {
        if(b[i]=='1')dec+=p;
        p*=2;
    }
    cout<<dec;
    return 0;
}
