#include <iostream>
#include <string>

using namespace std;

int main()
{
    int p,dec=0,number,choose,power=1;
    string output,numeric;
    cout<<"Do you want to change from numeric system to decimal or inversely?\nChoose from 1 and 2:";
    cin>>choose;
    if(choose==2){
        cout<<"Enter decimal number: "; cin>>dec;
        cout<<"Enter base of system: "; cin>>p;
        while(dec>0)
        {
            number=dec%p;
            if(number<10)
            {
                output = char(48+number)+output;
            }
            else
            {
                output= char('A'-10+number)+output;
            }
            dec = dec/p;
        }
        cout<<"Number in system with base "<<p<<": "<<output;
    }
    else if(choose == 1)
    {
        cout<<"Enter numeric number: "; cin>>numeric;
        cout<<"Enter base of system: "; cin>>p;
        for(int i = numeric.size()-1 ; i>=0 ; i--)
        {
            if((numeric[i]-48)>10)
            {
                dec+=(power*(numeric[i]-'A'+10));
            }
            else
            {
                dec+=(power*(numeric[i]-48));
            }
            power=power*p;
        }
        cout<<"This is your decimal number: "<<dec;
    }

    return 0;
}
