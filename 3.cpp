#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Жасыңызды енгізіңіз: ";
    cin >> a;

    if (a == 18){
        std :: cout << "Сіздің жасыңыз 18-де" << std :: endl;
    }
    else if(a > 18){
        std :: cout << "Сіздің жасыңыз 18-ден үлкен" << std :: endl;
    }
    else{
        std :: cout << "Сіз 18-ге толмағансыз!" << std :: endl;
    }

    return 0;
}