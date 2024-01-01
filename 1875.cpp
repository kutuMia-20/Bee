#include<iostream>
using namespace std;

int main ()
{
    int t;
    int gg=0,gr=0,gb=0;

    cin >> t;

    while(t--)
    {
        int p;

        cin >> p;
        gg=0,gr=0,gb=0;
        while(p--)
        {
            char m,s;
            cin >> m >> s;

            if(m == 'G' && s == 'R')
            {
                gg = gg + 1;
            }

            if(m == 'R' && s == 'B')
            {
                gr = gr + 1;
            }

            if(m == 'B' && s == 'G')
            {
                gb = gb + 1;
            }
            if(m == 'G' && s != 'R')
            {
                gg = gg +2;
            }
            if(m == 'R' && s != 'B')
            {
                gr= gr+2;
            }
            if(m == 'B' && s != 'G')
            {
                gb=gb+2;
            }
        }
        if(gg > gr && gg > gb)
        {
            cout << "green" << endl;
        }
        else if(gr > gg && gr > gb)
        {
            cout << "red" << endl;
        }
        else if(gb > gr && gb > gg)
        {
            cout << "blue" << endl;
        }
        else if(gg==gr && gr==gb && gg==gb)
        {
            cout << "trempate" << endl;
        }
        else if(gg==gr || gr==gb || gg==gb)
        {
            cout << "empate" << endl;
        }
    }
}
