#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y1,y2;

    cout << "Х-ке мән беріңіз: ";
    cin >> x;

    y1 = ((2 * pow(x,2)) + (3 * x) - 1);

    cout << "y1-дің мәні: " << y1 << endl;

    y2 = ((x + 5) / pow(x,2) + 2);

    cout << "y2-нің мәні: " << y2 << endl;

    return 0;
}