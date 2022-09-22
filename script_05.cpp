#include <iostream>
using namespace std;

int main () {

    for ( int i = 0; i < 5; i++ ) {
        cout << i << endl;
    }
    cout << endl;

    int n = 0;
    while ( n < 5 ) {
        cout << n << endl;
        n++;
    }
    cout << endl;

    int j = 0;
    do {
        cout << j;
    }
    while ( j > 0 );
    cout << endl;

    return 0;

}
