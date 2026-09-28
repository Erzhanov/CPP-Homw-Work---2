#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Бағаны енгізіңіз: ";
    cin >> a;

    if (a < 90 && a > 50){
        std :: cout << "Сіздің бағаңыз 90 мен 50-дің арасында орналасқан." << std :: endl;
    }
    else if(a < 90){
        std :: cout << "Сіздің бағаыңыз 90-нан үлкен" << std :: endl;
    }
    else{
        std :: cout << "Сіздің бағаңыз 50-ден төмен" << std :: endl;
    }
    return 0;
}