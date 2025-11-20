#include <iostream>
#include <string>
#define MAX_SIZE 1000

using namespace std;

char stackArr[MAX_SIZE];
int top = -1;

// Fungsi push
void push(char data) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow!\n";
        return;
    }
    stackArr[++top] = data;
}

// Fungsi pop
char pop() {
    if (top == -1) {
        return '\0'; // tanda error
    }
    return stackArr[top--];
}

// Fungsi isEmpty
bool isEmpty() {
    return (top == -1);
}

// Fungsi mengecek apakah pasangan kurung sesuai
bool isMatching(char buka, char tutup) {
    return  (buka == '(' && tutup == ')') ||
            (buka == '{' && tutup == '}') ||
            (buka == '[' && tutup == ']');
}

int main() {
    string ekspresi;
    cout << "Masukkan ekspresi: ";
    getline(cin, ekspresi);

    // Cek setiap karakter
    for (int i = 0; i < ekspresi.length(); i++) {
        char ch = ekspresi[i];

        // Jika kurung buka → push
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        // Jika kurung tutup → harus cocok dengan pop
        else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop();

            if (!isMatching(topChar, ch)) {
                cout << "Tidak Valid" << endl;
                return 0;
            }
        }
    }

    // Jika masih ada sisa kurung buka → tidak valid
    if (!isEmpty()) {
        cout << "Tidak Valid" << endl;
    } else {
        cout << "Valid" << endl;
    }

    return 0;
}