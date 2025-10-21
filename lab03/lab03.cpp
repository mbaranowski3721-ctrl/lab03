#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Wprowadź pierwszą zmienną: ";
    cin >> a;
    cout << "Wprowadź drugą zmienną: ";
    cin >> b;
    if (a == b) {
        cout << "Liczby są równe";
    }
    else if(a<b) {
        cout << "Zmienna a jest mniejsza od zmiennej b";
    }
    else {
        cout << "Zmienna b jest mniejsza od zmiennej a";
    }
}

