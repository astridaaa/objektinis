#ifndef main_h
#define main_h

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>
#include <cpuid.h>
#include <string>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <random>
#include <filesystem>
#include <deque>
#include <list>
#include <execution>
#include <thread>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::ios;
using std::isalpha;
using std::isdigit;
using std::isspace;
using std::numeric_limits;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;
using std::deque;
using std::list;
using konteinerisVector = std::vector<Stud>;
using konteinerisList = std::list<Stud>;
using konteinerisDeque = std::deque<Stud>;

/*void setVardas(const string& vardas){this->vardas=vardas;};
void setPavarde(const string& pavarde){this->pavarde=pavarde;};
void setEgzaminas(const int& egzaminas){this->egzaminas=egzaminas;};
void setBalasGalutinisVid(const int& BalasGalutinisVid){this->BalasGalutinisVid=BalasGalutinisVid;};*/
/*struct Stud
{
    string vardas, pavarde;
    int egzaminas;
    vector<int> nd;
    double BalasGalutinisVid;
};*/

class Stud{
    private:
        string vardas, pavarde;
        int egzaminas;
        vector<int> nd;
        double BalasGalutinisVid;
    public:
        Stud() : egzaminas{0}, nd{}, BalasGalutinisVid{0} {};
        Stud(std::istream& is);
        ~Stud() {};
        //setteriai
        std::istream& skaitytiStudentas(std::istream&);
        //getteriai
        inline string vardas() const {return vardas;};   
        inline string pavarde() const {return pavarde;};
        inline double galutinisBalas() const {return BalasGalutinisVid;};
        void setND(int& paz){nd.push_back(paz);};
};

Stud::Stud(std::istream& is){   //realizacija konstruktoriaus Stud(std::istream& is);
    skaitytiStudentas(is);
}

// Studentas::skaitytiStudentas realizacija
std::istream& Stud::skaitytiStudentas(std::istream&) {
    // Member funkcijos realizacija paremta ankstesniojo 2-ojo darbo funkcija: 
    // std::istream& skaitytiStudentas(std::istream&, Studentas&)
  }

#endif