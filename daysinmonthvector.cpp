/******************************************************************************

                              Isengan CPP 
         Program ini untuk menghitung jumlah hari dalam satu bulan.
              Kali ini memanfaatkan vector untuk mencari match.
                Terbikin oleh @lantip karena because.

*******************************************************************************/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
  string b;
  int t;
  int jmlhhari;
  bool kabisat;
  std::vector<std::string> bln { "JAN" , "FEB" , "MAR" , "APR" , "MAY" , "JUN" , "JUL" , "AUG" , "SEP" , "OCT" , "NOV" , "DEC" };
  cout << "Input month in three capital letters followed by year (e.g. JAN 1981, MAY 1870, etc):";
  cin>>b>>t;
  if(t<=2000 && t>=1600 && std::find(std::begin(bln), std::end(bln), b) != std::end(bln)){
      if(t % 4 == 0){
          kabisat = true ;
      } else {
          kabisat = false ;
      }
      if (b==bln[0]){
          jmlhhari=31;
      } else if (b==bln[1]){
          if (kabisat){
              jmlhhari=29;
          }else{
              jmlhhari=28;
          }
      }else if (b==bln[2]){
          jmlhhari=31;
      }else if (b==bln[3]){
          jmlhhari=30;
      }else if (b==bln[4]){
          jmlhhari=31;
      }else if (b==bln[5]){
          jmlhhari=30;
      }else if (b==bln[6]){
          jmlhhari=31;
      }else if (b==bln[7]){
          jmlhhari=31;
      }else if (b==bln[8]){
          jmlhhari=30;
      }else if (b==bln[9]){
          jmlhhari=31;
      }else if (b==bln[10]){
          jmlhhari=30;
      }else if (b==bln[11]){
          jmlhhari=31;
      }
      cout << jmlhhari;
  }else{
      cout<<"input diluar batas"<<endl;
  }
 }