#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y;

    //a-айнымалысныа мән енгізу.
    cout << "x-ға мән енгізіңіз: ";
    cin >> x;

    //формуланы есептеу.
    y = (5 * pow(x,2) - (3 * x) + 8);

    //нәтижені шығару.
    cout << "Формула бойынша жауабы: " << y << endl;



    return 0;
}