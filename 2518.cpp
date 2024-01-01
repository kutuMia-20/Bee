#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
    int n;

    while(cin >> n)
    {
        int h ,c,l;
        cin >> h >> c >> l;

        double hyper;

        hyper =  n * sqrt( h*h + c*c);

        cout << fixed << setprecision (4) << hyper*l/10000.0 << endl;
    }
}
