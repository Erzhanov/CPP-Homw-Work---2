#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Программирование ден алған бағаңызды енгізіңіз: ";
    cin >> a;

    cout << "Математикадан алған бағаңызды енгізіңіз: ";
    cin >> b;

    cout << "Ағылшын тілінен алған бағаны енгізіңіз: ";
    cin >> c;


    d = (a + b + c) / 3;
    cout << "Орташа баға: " << d << endl;

  
    if (d > 70) {
        cout << "Сіздің орташа бағаңыз 70-тен жоғары. Керемет!" << endl;
    }
    else if (d == 70) {
        cout << "Сіздің орташа бағаңыз 70-ке тең!" << endl;
    }
    else {
        cout << "Сіздің орташа бағаңыз 70-тен төмен!" << endl;
    }


    if (a > 80) {
        cout << "Programming бағасы 80-нен жоғары." << endl;
    }
    else {
        cout << "Programming бағасы 80-нен жоғары емес." << endl;
    }

  
    if (b >= 60) {
        cout << "Mathematics бағасы 60-тан жоғары немесе тең." << endl;
    }
    else {
        cout << "Mathematics бағасы 60-тан төмен." << endl;
    }

  
    if (a > 80 && b >= 60) {
        cout << "Екі шарт та орындалды!" << endl;
    }
    else {
        cout << "Екі шарттың біреуі орындалмады!" << endl;
    }

    return 0;
}