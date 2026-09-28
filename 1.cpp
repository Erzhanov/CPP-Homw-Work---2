#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "Бірінші санды енгізіңіз: ";
    cin >> a;

    cout << "Екінші санды енгізіңіз: ";
    cin >> b;

    if (a == b) {
        std :: cout << "Екін сан бір біріне тең." << std :: endl;
    }

    else {
        std :: cout << "Екі сан бір біріне тең емес." << std :: endl;
    }

    return 0;
}