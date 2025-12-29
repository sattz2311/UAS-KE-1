#include <iostream>
using namespace std;

int main() {
    string buku[3] = {"Algoritma", "Database", "Jaringan"};
    int suara[3] = {0,0,0}, pilih;
    char ulang;

    do {
        cout << "\n=== VOTING BUKU FAVORIT ===\n";
        for(int i=0;i<3;i++)
            cout << i+1 << ". " << buku[i] << endl;

        cout << "Pilih buku (1-3): ";
        cin >> pilih;
        suara[pilih-1]++;

        cout << "Voting lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y');

    cout << "\nHASIL VOTING\n";
    for(int i=0;i<3;i++)
        cout << buku[i] << " : " << suara[i] << " suara\n";

    return 0;
}
