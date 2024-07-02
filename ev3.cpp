#include <iostream>
using namespace std;

int main()
{
    ////cout <<"---1--------------------------------------------------------------------------------------------"
    int kg;
    cin >> kg;
    const float gallona = 0.26;
    float gallon = kg * gallona;
    cout << gallon;
    ////cout <<"---2--------------------------------------------------------------------------------------------"
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    float x = c * a + (b * a * 0.6);
    cout << x;
    ////cout <<"---4--------------------------------------------------------------------------------------------"
    double mesafe, a92, a95, premium;
    cin >> mesafe;
    cin >> a92;
    cin >> a95;
    cin >> premium;
    cout << mesafe / 100 * a92 << endl;
    cout << mesafe / 100 * a95 << endl;
    cout << mesafe / 100 * premium << endl;
    ////cout <<"---5--------------------------------------------------------------------------------------------"
    int en, uzunluq, hundurluk;
    cin >> en;
    cin >> uzunluq;
    cin >> hundurluk;
    int mkv = 0.5;
    cout << en * uzunluq * hundurluk * 80 / 100 * 0.5;
    ////cout <<"---6--------------------------------------------------------------------------------------------"
    int eded;
    cin >> eded;
    int q = eded / 100 % 10;
    int w = eded / 10 % 10;
    int e = eded % 10;
    cout << q << w << e << endl;
    ////cout <<"----7-------------------------------------------------------------------------------------------"
    int ed;
    cin >> ed;
    int a = ed / 100 % 10;
    int b = ed / 10 % 10;
    int c = ed % 10;
    cout << c << b << a << endl;
}