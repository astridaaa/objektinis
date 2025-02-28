// #include "optimizuota_programa.h"
#include "Funkciju_aprasai.h"

int main()
{
    int meniu;
    int paz;

    srand(time(NULL));
    vector<Stud> visi;
    int rusiavimas;
    cout << "Pasirinkite: 1 - duomenys ivedinejami ranka, 2 - pazymiai generuojami, 3 - generuojami visi studentu duomenys, 4 - duomenys nuskaitomi is failo, 5 - baigti programa" << endl;
    while (true)
    {
        try
        {
            cin >> meniu;
            if(cin.fail()){
                cin.clear();  
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw "Neteisingas pasirinkimas, iveskite skaiciu 1-5";
            }
            if (meniu > 5 || meniu < 1) 
            { 
                throw "Neteisingas pasirinkimas, iveskite skaiciu 1-5";
            }
            
            break;
        }
        catch (const char* masyvas)
        {
            cout << masyvas << endl;
        }
    }

    switch (meniu)
    {
    case 1:
    {
        duomenu_ivedimas(visi, meniu);
        print(visi, false, 4);
        break;
    }

    case 2:
    {
        duomenu_ivedimas(visi, meniu);
        print(visi, false, 4);
        break;
    }

    case 3:
    {
        duomenu_generavimas(visi);
        print(visi, false, 4);
        break;
    }

    case 4:
    {
        int printinimas;
        fileskait(visi);
        cout << "Duomenis isvesti terminale - 1, duomenis isvesti faile - 2" << endl;
        cin >> printinimas;
        /*while (true)
    {
        try
        {
            

            if (printinimas != 1 || printinimas != 2)// idet kad jei ir nera skaicius
            { 
                throw printinimas;
            }

            break;
        }
        catch (int printinimas)
        {
            cout << "Iveskite teisinga skaiciu (1 arba 2)\n";
        }
    }*/
        cout << "Duomenys rusiuojami pagal: 1 - vardus; 2 - pavardes; 3 - galutinius balus; 4 - duomenys nera rusiuojami " << endl;
        cin >> rusiavimas;
        /*while (true)
    {
        try
        {
            

            if (rusiavimas < 1 || rusiavimas > 4)// idet kad jei ir nera skaicius
            { 
                throw rusiavimas;
            }

            break;
        }
        catch (int rusiavimas)
        {
            cout << "Iveskite teisinga skaiciu (nuo 1 iki 4)\n";
        }
    }*/
        if (printinimas == 1)
        {
            print(visi, false, rusiavimas);
        }
        else
            print(visi, true, rusiavimas);
        break;
    }
    case 5:
    {
        return 0;
    }
    }
}
