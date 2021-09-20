/******************************************************************************

                              Isengan CPP 
        Program ini untuk membuat table penjumlahan dari input dua angka.
                    Terbikin oleh @lantip karena because.
            compile it with: $g++ createsumtable.cpp -o sumtable
                       run it with: $./sumtable

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N, M, result, i, j;
    cout << "Input two numbers separate with space (e.g: '3 4', '5 5', etc): ";
    cin >> N >> M;
    cout << "Result: \n";
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            result = j + i;
            if (result == 0)
            cout << "+" << "\t";
            else
            cout << result << "\t";
        }
        cout << endl;
    }
    return 0;
}
