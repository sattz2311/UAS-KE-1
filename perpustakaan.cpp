#include <iostream>
using namespace std;

int main() {
    string buku[2];
    int stok[2];
    int i;

    // input
    for (i = 0; i < 2; i++) {
        cout << "Judul buku ke-" << i+1 << " : ";
        getline(cin, buku[i]);
        cout << "Stok buku      : ";
        cin >> stok[i];
        cin.ignore();
    }

    // tampil
    cout << "\nDAFTAR BUKU\n";
    for (i = 0; i < 2; i++) {
        cout << i+1 << ". " << buku[i]
             << " (stok: " << stok[i] << ")\n";
    }

    // pinjam
    cout << "\nPilih nomor buku yang dipinjam: ";
    cin >> i;

    if (stok[i-1] > 0) {
        stok[i-1]--;
        cout << "Buku berhasil dipinjam\n";
    } else {
        cout << "Stok habis\n";
    }

    return 0;
}
