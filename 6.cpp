#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Сан енгізіңіз: ";
    cin >> a;
    
    if (a % 3 == 0){
        std :: cout << "Сіздің енгізген саныңыз 3-ке қалдықсыз бөлінеді." << std :: endl;
    }
    else{
        std :: cout << "Сіздің енгізген саныңыз 3-ке бөлгенде қалдың қалады." << std :: endl;
    }
    return 0;

}