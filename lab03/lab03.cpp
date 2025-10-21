#include <iostream>
using namespace std;

int main()
{
    /*
    //Zadanie 1
    cout << "Zadanie1" << endl;

    int a, b;
    cout << "Wprowadz pierwsza zmienna: ";
    cin >> a;
    cout << "Wprowadz druga zmienna: ";
    cin >> b;
    if (a == b) {
        cout << "Liczby sa rowne";
    }
    else if(a < b) {
        cout << "Zmienna a jest mniejsza od zmiennej b";
    }
    else {
        cout << "Zmienna b jest mniejsza od zmiennej a";
    }
    cout << endl;
    */
    /*
    //Zadanie 2
    cout << "Zadanie2" << endl;

    int a, b;
    cout << "Wprowadz pierwsza zmienna: ";
    cin >> a;
    cout << "Wprowadz druga zmienna: ";
    cin >> b;

    if (a == b) {
        cout << "Liczby sa takie same";
    }
    else {
        if (a < b) {
            cout << "Zmienna a jest mniejsza od zmiennej b";
        }
        else {
            cout << "Zmienna b jest mniejsza od zmiennej a";
        }
    }
    */
    
    /* ???????????????????????????????????????????????
    cout << "Zadanie 3" << endl;
    int r;
    cout << "Podaj r: ";
    cin >> r;

    if (0.7 <= r && r <= 1) {
        cout << "Bardzo silna korelacja dodatnia";
    }
    else if (0.5 <= r && r < 0.7) {
        cout << "Silna korelacja dodatnia";
    }
    else if (0.3 <= r && r < 0.5) {
        cout << "Umiarkowana korelacja dodatnia";
    }
    else if (0.2 <= r && r < 0.3) {
        cout << "Slaba korelacja dodatnia";
    }
    else if (0 <= r && r < 0.2) {
        cout << "Brak korelacji";
    }
    */

    cout << "Zadanie 4" << endl;
    float a;
    float b;
    char znak;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj znak: ";
    cin >> znak;

    switch (znak) {
    case '*': cout << a * b; break;
    case '+': cout << a + b; break;
    }


        
    


}

