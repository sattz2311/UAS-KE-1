#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool valid(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else if(c == ')' || c == '}' || c == ']') {
            if(st.empty()) return false;
            char top = st.top();
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s;
    cout << "Masukkan ekspresi: ";
    getline(cin, s);

    if(valid(s))
        cout << "Valid";
    else
        cout << "Tidak Valid";

    return 0;
}
