#include <iostream>
using namespace std;

int main() {
    string buku[2] = {"Algoritma", "Basis Data"};
    int suara[2] = {0, 0};
    int pilih;

    cout << "Pilih buku favorit:\n";
    cout << "1. Algoritma\n";
    cout << "2. Basis Data\n";
    cout << "Pilihan: ";
    cin >> pilih;

    suara[pilih-1]++;

    cout << "\nHASIL VOTING\n";
    cout << buku[0] << " : " << suara[0] << " suara\n";
    cout << buku[1] << " : " << suara[1] << " suara\n";

    return 0;
}
