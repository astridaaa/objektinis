#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
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
int a = (rand() % 5 + 2);