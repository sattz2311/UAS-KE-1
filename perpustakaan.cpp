#include <iostream>
using namespace std;

int main() {
    string judul[10];
    int stok[10], n = 0, menu;

    do {
        cout << "\n1.Input Buku\n2.Tampil Buku\n3.Pinjam\n4.Keluar\nPilih: ";
        cin >> menu;

        if (menu == 1) {
            cout << "Judul : ";
            cin.ignore();
            getline(cin, judul[n]);
            cout << "Stok  : ";
            cin >> stok[n];
            n++;
        }
        else if (menu == 2) {
            for (int i = 0; i < n; i++)
                cout << i+1 << ". " << judul[i] << " (" << stok[i] << ")\n";
        }
        else if (menu == 3) {
            int i;
            cout << "Nomor buku: ";
            cin >> i;
            if (stok[i-1] > 0) {
                stok[i-1]--;
                cout << "Berhasil dipinjam\n";
            } else {
                cout << "Stok habis\n";
            }
        }

    } while (menu != 4);

    return 0;
}
