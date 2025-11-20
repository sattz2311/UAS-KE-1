#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    // Constructor
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Push - menambahkan data ke puncak stack
    void push(int data) {
        if (top == capacity - 1) {
            cout << "\n[ERROR] Stack penuh! Tidak dapat menambahkan data.\n";
            return;
        }
        arr[++top] = data;
        cout << "\n[SUCCESS] Data " << data << " berhasil ditambahkan ke stack.\n";
    }

    // Pop - menghapus data dari puncak stack
    void pop() {
        if (isEmpty()) {
            cout << "\n[ERROR] Stack kosong! Tidak ada data yang dapat dihapus.\n";
            return;
        }
        cout << "\n[SUCCESS] Data " << arr[top] << " berhasil dihapus dari stack.\n";
        top--;
    }

    // Peek - menampilkan elemen paling atas
    void peek() {
        if (isEmpty()) {
            cout << "\n[ERROR] Stack kosong! Tidak ada data untuk ditampilkan.\n";
            return;
        }
        cout << "\n[INFO] Elemen paling atas: " << arr[top] << "\n";
    }

    // IsEmpty - mengecek apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // Size - menampilkan jumlah elemen stack
    void size() {
        cout << "\n[INFO] Jumlah elemen dalam stack: " << (top + 1) << "\n";
        cout << "[INFO] Kapasitas maksimal: " << capacity << "\n";
    }

    // Fungsi tambahan untuk menampilkan semua elemen
    void display() {
        if (isEmpty()) {
            cout << "\n[INFO] Stack kosong.\n";
            return;
        }
        cout << "\n[INFO] Isi Stack (dari atas ke bawah):\n";
        for (int i = top; i >= 0; i--) {
            cout << "   [" << i << "] " << arr[i] << "\n";
        }
    }
};

void displayMenu() {
    cout << "\n========================================\n";
    cout << "   PROGRAM STACK MENGGUNAKAN ARRAY\n";
    cout << "========================================\n";
    cout << "1. Push   (Tambah data ke stack)\n";
    cout << "2. Pop    (Hapus data dari stack)\n";
    cout << "3. Peek   (Lihat elemen paling atas)\n";
    cout << "4. IsEmpty (Cek apakah stack kosong)\n";
    cout << "5. Size   (Lihat jumlah elemen)\n";
    cout << "6. Exit   (Keluar program)\n";
    cout << "========================================\n";
    cout << "Pilih menu (1-6): ";
}

int main() {
    int capacity;
    
    cout << "========================================\n";
    cout << "   PROGRAM STACK MENGGUNAKAN ARRAY\n";
    cout << "========================================\n";
    cout << "Masukkan kapasitas maksimal stack: ";
    cin >> capacity;

    if (capacity <= 0) {
        cout << "\n[ERROR] Kapasitas harus lebih dari 0!\n";
        return 1;
    }

    Stack stack(capacity);
    int pilihan, data;

    do {
        displayMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1: // Push
                cout << "\nMasukkan data yang akan ditambahkan: ";
                cin >> data;
                stack.push(data);
                stack.display();
                break;

            case 2: // Pop
                stack.pop();
                stack.display();
                break;

            case 3: // Peek
                stack.peek();
                break;

            case 4: // IsEmpty
                if (stack.isEmpty()) {
                    cout << "\n[INFO] Stack kosong.\n";
                } else {
                    cout << "\n[INFO] Stack tidak kosong.\n";
                }
                break;

            case 5: // Size
                stack.size();
                break;

            case 6: // Exit
                cout << "\n[INFO] Terima kasih telah menggunakan program ini!\n";
                cout << "========================================\n";
                break;

            default:
                cout << "\n[ERROR] Pilihan tidak valid! Silakan pilih menu 1-6.\n";
        }

    } while (pilihan != 6);

    return 0;
}