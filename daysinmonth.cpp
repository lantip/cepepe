/******************************************************************************

                              Isengan CPP 
         Program ini untuk menghitung jumlah hari dalam satu bulan.
                Terbikin oleh @lantip karena because.
            compile it with: $g++ daysinmonth.cpp -o daysinmonth
                       run it with: $./daysinmonth

*******************************************************************************/


#include <iostream>

using namespace std;

bool cekKabisat(string str)
{
    int n = str.length();
    if (n == 0)
        return false;
    if (n == 1)
        return ((str[0] - '0') % 4 == 0);
    int last = str[n - 1] - '0';
    int second_last = str[n - 2] - '0';
    return ((second_last * 10 + last) % 4 == 0);
}

int main()
{
    string mth;
    string yr;
    cout << "Input month in three capital letters followed by year (e.g. JAN 1981, MAY 1870, etc):";
    cin >> mth >> yr;
    if(mth == "APR" || mth == "JUN" || mth == "SEP" || mth == "NOV")
    cout << mth << " " << yr << " has 30 days";
    else if(mth=="JAN"||mth=="MAR"||mth=="MAY"||mth=="JUL"||mth=="AUG"||mth=="OCT"||mth=="DEC")
    cout << mth << " " << yr << " has 31 days";
    else if(mth=="FEB")
    cekKabisat(yr) ? cout << mth << " " << yr << " has 29 days" : cout << mth << " " << yr << " has 28 days";
    else
    cout << "wrong input format" << endl;
    return 0;
}