#include <iostream>
using namespace std;

int main () {
    string judul[5];
    int stok[5];
    int menu,n =0;

    do {
        cout << "\n===menu perpustkaan===\n";
        cout << " 1. input buku \n";
        cout << " 2. tampil buku\n";
        cout << " 3. pinjam buku\n";
        cout << " 4. keluar\n";
        cin >> menu;
        cin.ignore(1000, '\n');

        if (menu ==1) {
            cout << "judul buku : ";
            getline(cin,judul[n]);
            cout << "stok buku : ";
            cin>> stok[n];
            n++;
        }
        else if (menu ==2) {
            for (int i =0;i<n; i++) {
                cout <<i+1<< "." << judul[i]
                << "(stok : "<<stok[i]<<")\n";
            }
        }
        else if (menu ==3) {
            int i;
            cout <<"pilih nomor buku :";
            cin>> i;

         if ( i<=n && stok [i-1]>0) {
            stok [i-1]--;
            cout <<"buku berhasil dipinjam\n";
         } else {
            cout <<"stok habis atau nomor tidak valid\n";
        } 
    }
   } while (menu !=4);
   cout <<"program selesai\n";
   return 0;
}