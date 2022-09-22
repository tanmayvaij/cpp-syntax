#include <iostream>
using namespace std;

int main () {

    char button;
    cin >> button;

    switch (button) {
        case 'a':
            cout << "Hello" << endl;
            break;
        case 'b':
            cout << "Hola" << endl;
            break;
        case 'c':
            cout << "Namaste" << endl;
            break;
        case 'd':
            cout << "Gotcha" << endl;
            break;
        default:
            cout << "Learning more" << endl;
            break;
    }

    return 0;

}
