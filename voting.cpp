#include <iostream>
using namespace std;

int main () {
    string buku[3] = {"algoritma", "database","jaringan"};
    int suara[3] = {0,0,0}, pilih;
    char ulang;

    do {
        cout << "\n== VOTING BUKU FAVORIT ===\n";
        for(int i=0;i<3;i++)
        cout << i+i << "." << buku[i] << endl;

        cout << "pilih buku (1-3) ";
        cin >> pilih;
        suara[pilih-1]++;

        cout << "VOTING LAGI ? (y/n) ";
        cin >>  ulang ;
    } while (ulang == 'y');

   cout << "\nhasil voting\n";
    for(int i=0;i<3;i++)
    cout << buku[i] << " : " << suara[i] << "suara\n";

    return 0;
}