#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "A-санын енгізіңіз: ";
    cin >> a;

    cout << "Б-санын енгізіңіз: ";
    cin >> b;


    if (a > b){
        std :: cout << "А саны Б санына үлкен." << std :: endl;
    }

    else{
        std :: cout << "Б саныя А санынан үлкен." << std :: endl;
    }
}