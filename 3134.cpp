
#include<iostream>
using namespace std;

int main ()
{
    string y1,y2,y3,y4;

    cin >> y1 >> y2 >> y3 >> y4;

    int x1 = stoi(y1.erase(y1.find('.'),1));
    int x2 = stoi(y2.erase(y2.find('.'),1));

    int x3 = stoi(y3.erase(y3.find('.'),1));
    int x4 = stoi(y4.erase(y4.find('.'),1));

    if( x1 == x2+x3+x4 || x2 == x1 + x3 +x4 || x3 == x1 + x2 + x4 || x4 == x1+x2+x3)
    {
        cout << "YES" << endl;
    }
    else if(x1+x2 == x3+x4 || x1+x3 == x2+x4 || x1+x4 == x2+x3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
