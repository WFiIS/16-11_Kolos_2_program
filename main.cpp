#include <iostream>

using namespace std;

int main()
{
    char proces;

    do {
        char samogloski[6] = {'a', 'e', 'o', 'u', 'i', 'y'};
        int samoglosek = 0;

        // Wprowadzenie wyrazu.
        string wyraz;
        cout << "Podaj wyraz (do 19 znakow):" << endl;
        cin >> wyraz;
        cout << endl;

        if (wyraz.length() <= 19) {
            for (int i = 0; i < wyraz.length(); i++) {
                for (int j = 0; j < 6; j++) {
                    if (samogloski[j] == wyraz.at(i)) {
                        samoglosek++;
                        break;
                    }
                }
            }

            cout << "ilosc samoglosek: " << samoglosek << endl;
            cout << "ilosc spolglosek: " << wyraz.length() - samoglosek << endl;
            cout << "razem: " << wyraz.length() << endl;
            cout << endl;
        } else {
            cout << "Wyraz ma wiecej niz 19 liter." << endl;
            cout << endl;
        }

        cout << "Czy chcesz podac kolejny wyraz? (t/n) " << endl;
        cin >> proces;
        cout << endl;
    } while (proces == 't' || proces == 'T');
    return 0;
}
