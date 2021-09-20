/******************************************************************************

                              Isengan CPP 
         Program ini untuk menghitung jumlah hari dalam satu bulan.
              Kali ini memanfaatkan list untuk mencari match.
                Terbikin oleh @lantip karena because.
            compile it with: $g++ daysinmontharray.cpp -o daysinmontharray
                       run it with: $./daysinmontharray

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string b;
    int t,jmlHari;
    bool kabisat;
    string bln[12] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    string tigasatu[7] = {"JAN","MAR","MAY","JUL","AUG","OCT","DEC"};
    cout << "Input month in three capital letters followed by year (e.g. JAN 1981, MAY 1870, etc):";
    cin>>b>>t;
    if(t<=2000 && t>=1600 && std::find(std::begin(bln), std::end(bln), b) != std::end(bln)) {
        if(t % 4 == 0){
            kabisat = true ;
        } else {
            kabisat = false ;
        }
        if (b==bln[1]){
            if (kabisat) {
                jmlHari=29;
            } else {
                jmlHari=28;
            }
        } else {
            if (std::find(std::begin(tigasatu), std::end(tigasatu), b) != std::end(tigasatu)){
                jmlHari = 31;
            } else {
                jmlHari = 30;
            }
        }
        cout << jmlHari;
    } else{
        cout << "wrong input format" << endl;
    }
}