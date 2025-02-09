#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::getline;
using std::isalpha;
using std::isspace;
using std::left;
using std::setprecision;
using std::setw;
using std::sort;
using std::string;
using std::vector;
using std::numeric_limits;
using std::streamsize;

struct Stud
{
    string vardas, pavarde;
    int EGrez;
    vector<int> NDrez;
};

Stud stud;
int paz;
vector<Stud> VISIstud;

double galutinis(vector<int> NDrez, int EGrez)
{
    int b = rand() % 11 + 1;
    if (b % 2 == 0)
    {
        double vidurkis;
        double suma = 0;

        for (int p : NDrez)
        {
            suma += p;
        }
        vidurkis = suma / NDrez.size();
        double Gbalas_vid = round((0.4 * vidurkis + 0.6 * EGrez) * 100) / 100;
        return Gbalas_vid;
    }
    else
    {
        double med;
        double Gbalas_med;
        sort(NDrez.begin(), NDrez.end());
        if (NDrez.size() % 2 == 0)
        {
            med = (NDrez[NDrez.size() / 2 - 1] + NDrez[NDrez.size() / 2]) / 2;
        }
        else
        {
            med = NDrez[round(NDrez.size() / 2) - 1];
        }
        Gbalas_med = round((0.4 * med + 0.6 * EGrez) * 100) / 100;
        return Gbalas_med;
    }
}

bool tinkamas(string vardas){
    for (char a : vardas)
        {
            if (isalpha(a) == false || isspace(a) == true)            
            {
                return false;
                
            }
            else continue;
            }

    return true;
}

