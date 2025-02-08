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
        int a = (rand() % 4 + 2);
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

        VISIstud.push_back(stud);
    }

    cout << setw(15) << left << "Pavardė" << setw(15) << left << "Vardas" << setw(15) << left << "Galutinis (Vid.) / Galutinis (Med.)\n";
    cout << "------------------------------------------------------------" << endl;

    for (Stud j : VISIstud)
    {
        cout << setw(15) << left << j.pavarde << setw(15) << left << j.vardas << setw(15) << fixed << setprecision(2) << galutinis(j.NDrez, j.EGrez) << endl;
    }
}