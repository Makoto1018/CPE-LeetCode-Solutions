// ver 1.0
#include <iostream>
using namespace std;

int main(){
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c =='+'){
        add(a, b);
    }
    else if (c =='-'){
        subtract(a, b);
    }
    else if (c == '*'){
        cout << a * b << endl;
    }
    else if (c == '/'){
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 1;
        }
        cout << a / b << endl;
    }
    return 0;
}

void add(int a, int b) {
    cout << a + b << endl; // Corrected the comment syntax
}

void subtract(int a, int b) {
    cout << a - b << endl;
}