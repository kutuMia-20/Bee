#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
    int x,y;
    char c;
    int sum = 0,i=0;

    while(1)
    {

        i++;

        cin >> x;

        if(x==0)
        {
            break;
        }
        sum =0;

        for(int i=0; i<x; i++)
        {
            cin >> y;

            if(y < 0)
            {
                sum = sum+y;
            }
            else
            {
                sum = sum + y;
            }
        }
        cout <<  "Teste "<< i << endl<< sum << endl << endl;
    }
}
