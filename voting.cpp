#include <iostream>
using namespace std;

int main() {
    string buku[3] = {"Algoritma", "Database", "Jaringan"};
    int suara[3] = {0, 0, 0};
    int menu, pilih;

    do {
        cout << "\n=== MENU VOTING BUKU ===\n";
        cout << "1. Voting Buku\n";
        cout << "2. Lihat Hasil\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> menu;

        if (menu == 1) {
            cout << "\nPilih Buku Favorit:\n";
            for (int i = 0; i < 3; i++) {
                cout << i+1 << ". " << buku[i] << endl;
            }
            cout << "Pilihan: ";
            cin >> pilih;

            suara[pilih-1]++;
            cout << "Voting berhasil\n";
        }
        else if (menu == 2) {
            cout << "\nHASIL VOTING:\n";
            for (int i = 0; i < 3; i++) {
                cout << buku[i] << " : " << suara[i] << " suara\n";
            }
        }

    } while (menu != 3);

    cout << "Program selesai\n";
    return 0;
}
