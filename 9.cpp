#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,x2,y1,y2,a1,a2,a3;

    cout << "x1-ге мән беріңіз: ";
    cin >> x1;

    cout << "x2-ге мән беріңіз: ";
    cin >> x2;

    cout << "y1-ге мән беріңіз: ";
    cin >> y1;

    cout << "y2-ге мән беріңіз: ";
    cin >> y2;

    a1 = x2 - x1;

    a2 = y2 - y1;

    a3 = sqrt(pow(a1,2) + pow(a2,2));
    
    cout << "Екі нүктенің арасындағы қашықтық: " << a3 << endl; 
    

    return 0;
}