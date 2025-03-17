
#include "strategija.h"


int main(){
    int konteineriuTipas;
    int rusiavimasPagal;
    cout << "Programa testuojama su:" << endl;
    cout << "1 | vector tipo konteineriu" << endl;
    cout << "2 | deque tipo konteineriu" << endl;
    cout << "3 | list tipo konteineriu" << endl;
    cin >> konteineriuTipas;

    cout << "Studentus rusiuoti pagal:" << endl;
    cout << "1 | Vardus\n";
    cout << "2 | Pavardes\n";
    cout << "3 | Galutini bala\n";
    cout << "4 | Duomenu nerusiuoti\n";
    cin >> rusiavimasPagal;

    if (konteineriuTipas == 1) {
        konteinerisVector studentai, pirmunai, nesimokantys;
       vykdomaPrograma(rusiavimasPagal, studentai, pirmunai, nesimokantys);
    }
    else if (konteineriuTipas == 2) {
        konteinerisDeque studentai, pirmunai, nesimokantys;
       vykdomaPrograma(rusiavimasPagal, studentai, pirmunai, nesimokantys);
    }
    else{
        konteinerisList studentai, pirmunai, nesimokantys;
        vykdomaPrograma(rusiavimasPagal, studentai, pirmunai, nesimokantys);
    }
}