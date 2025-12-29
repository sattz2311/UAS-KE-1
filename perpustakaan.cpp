#include <iostream>
using namespace std;

int main ( ) {
    string judul[10];
    int stok[10], n = 0, menu;

    do {
        cout << "\n1.input buku\n2.tampil buku\n3.pinjam\n4.keluar\npilih: ";
        cin >> menu;

        if (menu == 1) {
            cout << "judul : ";
            cin.ignore();
            getline(cin,judul[n]);
            cout << "stok : ";
            cin >> stok[n];
            n++;
        }
        else if (menu == 3) {
            int i ;
            cout << "nomor buku : ";
            cin >> i;
            if (stok[i-1] > 0) {
                stok[i-1]--;
                cout << "berhasil dipinjam\n";
            } else {
             cout <<"stok habis\n";
             }
        }
    } while (menu != 4) ;
     return 0;
}