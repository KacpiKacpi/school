#include <iostream>
#include <string>

using namespace std;

int main()
{
    int  dec=0 , p=1,w;
    string b;
    cout << "Enter binary number: " ; cin>>b ; cout<<endl;
    cout<<"Which way do you prefer 1 or 2: "; cin>>w;
    if(w==1)
        for(int i = b.size()-1 ; i>=0  ; i--)
        {
            if(b[i]=='1')dec+=p;
            p*=2;
        }
    else if(w==2)
    for(int i = 0; i<b.size();i++)
    {
        dec*=2;
        if(b[i]=='1')dec++;
    }
    cout<<dec;
    return 0;
}
