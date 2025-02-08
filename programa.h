#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::left;
using std::setprecision;
using std::setw;
using std::string;
using std::vector;
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
    double vidurkis;
    double suma = 0;

    for (int p : NDrez)
    {
        suma += p;
    }
    vidurkis = suma / NDrez.size();
    double Gbalas = round((0.4 * vidurkis + 0.6 * EGrez) * 100) / 100;
    return Gbalas;
}