#include <iostream>
using namespace std;

int main() {
    string judul[5];
    int stok[5];
    int menu, n = 0;

    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Input Buku\n";
        cout << "2. Tampilkan Buku\n";
        cout << "3. Pinjam Buku\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> menu;

        if (menu == 1) {
            cout << "Judul buku : ";
            cin.ignore();
            getline(cin, judul[n]);
            cout << "Stok buku  : ";
            cin >> stok[n];
            n++;
        }
        else if (menu == 2) {
            for (int i = 0; i < n; i++) {
                cout << i+1 << ". " << judul[i]
                     << " (stok: " << stok[i] << ")\n";
            }
        }
        else if (menu == 3) {
            int i;
            cout << "Pilih nomor buku: ";
            cin >> i;

            if (stok[i-1] > 0) {
                stok[i-1]--;
                cout << "Buku berhasil dipinjam\n";
            } else {
                cout << "Stok buku habis\n";
            }
        }

    } while (menu != 4);

    cout << "Program selesai\n";
    return 0;
}
