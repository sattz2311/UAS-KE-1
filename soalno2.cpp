#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string kalimat;
    stack<char> stackKarakter;
    
    cout << "Input  : ";
    getline(cin, kalimat);
    
    for (int i = 0; i < kalimat.length(); i++) {
        stackKarakter.push(kalimat[i]);
    }
    
    cout << "Output : ";
    while (!stackKarakter.empty()) {
        cout << stackKarakter.top();
        stackKarakter.pop();
    }
    cout << endl;
    
    return 0;
}