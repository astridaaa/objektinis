#include "programa.h"

main()
{
    srand(time(NULL));
    for (int i = 0; i < rand() % 5 + 1; i++)
    {
        cout << "Įveskite studento vardą\n";
        cin >> stud.vardas;
        cout << "Įveskite studento pavardę\n";
        cin >> stud.pavarde;

        cout << "Įveskite " << a << " studento pažymius (-į)" << endl;
        for (int i = 0; i < a; i++)
        {
            cin >> paz;
            while (paz > 10 || paz < 1)
            {
                cout << "Įveskite rezultatą skalėje 1-10\n";
                cin >> paz;
            }
            stud.NDrez.push_back(paz);
        }

        cout << "Įveskite studento egzamino pažymį\n";
        cin >> stud.EGrez;
        while (stud.EGrez > 10 || stud.EGrez < 1)
        {
            cout << "Įveskite rezultatą skalėje 1-10\n";
            cin >> stud.EGrez;
        }
        cout << "..." << endl;
    }
}