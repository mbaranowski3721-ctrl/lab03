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
    
    /*
    cout << "Zadanie 3" << endl;
    float r;
    cout << "Podaj r: ";
    cin >> r;

    if (r <= 1 && r >= 0.69) {
        cout << "Bardzo silna korelacja dodatnia";
    }
    else if (r < 0.69 && r >= 0.5) {
        cout << "Silna korelacja dodatnia";
    }
    else if (r < 0.5 && r >= 0.3) {
        cout << "Umiarkowana korelacja dodatnia";
    }
    else if (r < 0.3 && r >= 0.2) {
        cout << "Slaba korelacja dodatnia";
    }
    else if (r < 0.2 && r >= 0) {
        cout << "Brak korelacji";
    }
    else {
        cout << "Zakres r od 0 do 1";
    }
    */
    /*
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
    case '/': if (b == 0) {
        cout << "Nie dzielimy przez 0";
    }
            else {
        cout << a / b; break;
    }
    case '-': cout << a - b; break;
    default: cout << "Wybrany nieznany znak"; break;
    }
    */
    /*
    cout << "Zadanie 5" << endl;
    while (1) {
        cout << "xd";
    }
    */

    cout << "Zadanie 6" << endl;
    char d;
    float a;
    float b;
    char znak;
    bool xd = true;
    while (xd) {
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        cout << "Podaj znak: ";
        cin >> znak;

        switch (znak) {
        case '*': cout << a * b << endl; break;
        case '+': cout << a + b << endl; break;
        case '/': if (b == 0) {
            cout << "Nie dzielimy przez 0";
        }
                else {
            cout << a / b << endl; break;
        }
        case '-': cout << a - b << endl; break;
        default: cout << "Wybrany nieznany znak" << endl; break;
        }
        cout << "Czy zakonczyc dzialanie kalkulatora? Tak lub Nie: ";
        cin >> d;
         
        
    }
}

