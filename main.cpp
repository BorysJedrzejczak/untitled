#include <iostream>
using namespace std;

int main() {
    //branch 4//
    cout << "Hello, World!" << endl;

    char c;

    cout << "wpisz c zeby zrobic salto\n";
    cin >> c;

    if (c == 'c'){
        cout << "saltooooo";
        return 0;
    }

    else{
        cout << "nie ma salta";
        return 1;
    }
}
