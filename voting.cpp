#include<iostream>
using namespace std;

int main () {
    string buku [2] = {"algoritma","basis data"} ;
    int suara [2] = { 0,0} ;
    int pilih ;

    cout << "pilih buku favorit :\n";
    cout << " 1. algoritma\n";
    cout << " 2. basis data\n";
    cout << " pilihan :";
    cin >> pilih ;

    suara [pilih-1]++;

    cout <<"\nhasil voting\n";
    cout << buku[0]<< "."  [0] << "suara\n";
    cout << buku[1]<< "." [1] << "suara\n";

   return 0;
}