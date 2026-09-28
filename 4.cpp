#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Жасыңызды енгізіңіз: " << endl;
    cin >> a;

    if (a >= 18 && a <= 25){
        std :: cout << "Сіздің жасыңыз 18 бен 25 аралығында." << std :: endl;
    }
    else if(a < 18){
        std :: cout << "Сіздің жасыңыз 18-ге толмаған" << std :: endl;
    }
    else{
        std :: cout << "Сіздің жасыңыз 25-тен үлкен." << std :: endl;
    }

    return 0;
}