#include <iostream>

using namespace std;

int main()
{
    int dec;
    string bin = "";
    cout<<" Enter he decimal number that you want to convert into binary : ";    cin>>dec   ;
    while(dec > 0)///WE ADDING ON RIGHT !!!!!!!!!
    {
        if(dec%2==0) bin = "0"+bin;
        else bin = "1"+bin;
        dec = dec/2;
    }
    cout<<bin;
    return 0;
}
