#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 5;

int MSK(int Tab[][N])
{
    for(int i = 1; i < N; i++)
    {
        Tab[0][i] = Tab [0][i] + Tab[0][i-1];
        Tab[i][0] = Tab[i][0] + Tab[i-1][0];
    }
    for(int i = 1; i < N; i++)
    {
        for(int j = 1; j < N; j++)
        if(Tab[i-1][j]>Tab[i][j-1])
        {
            Tab[i][j]+=Tab[i-1][j];
        }
        else
        Tab[i][j] += Tab[i][j-1];
    }
    return Tab[N-1][N-1];
}

string wypisz(int Tab[][N])
{
    string wyn="";
    int i =4,j=4;
    while(i!=0 && j!=0)
        {
            if (Tab[i-1][j] > Tab[i][j-1])
            {

                wyn=(" D" + to_string(int(Tab[i][j] - Tab[i-1][j]))) + wyn;
                i--;

            }
            else
            {

                wyn=(" P"+ to_string(int(Tab[i][j] - Tab[i][j-1]))) + wyn;
                j--;

            }
    }
    if(i==0)
    {
        while(j!=0)
        {
            wyn=" P"+ to_string(int(Tab[i][j] - Tab[i][j-1])) + wyn;
            j--;
        }
    }
    if(j==0)
    {
        while(i!=0)
        {
            wyn=" D" + to_string(int(Tab[i][j] - Tab[i-1][j])) + wyn;
            i--;
        }
    }
    return wyn;
}


int main()
{
    int tab[N][N];
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            tab[i][j] = rand() % 10;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << "maksymalna suma w kwadracie: " << MSK(tab) << endl;
    cout<<wypisz(tab);
    return 0;

}
