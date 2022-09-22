#include <iostream>
using namespace std;

int main () {

    int a = 10;
    cout << "size of int:- " << a << " " << sizeof(a) << "bytes" << endl;

    float b = 14.56;
    cout << "size of float:- " << b << " " << sizeof(b) << "bytes" << endl;

    char c = 'g';
    cout << "size of char:- " << c << " " << sizeof(c) << "bytes" << endl;

    bool d = true;
    cout << "size of bool:- " << d << " " << sizeof(d) << "bytes" << endl;

    short int e = 3;
    cout << "size of short int:- " << e << " " << sizeof(e) << "bytes" << endl;

    long int f = 89;
    cout << "size of long int:- " << f << " " << sizeof(f) << "bytes" << endl;

    long long int g = 500;
    cout << "size of long long int:- " << g << " " << sizeof(g) << "bytes" << endl;

    double h = 56.234;
    cout << "size of double:- " << h << " " << sizeof(h) << "bytes" << endl;

    long double i = 567.12;
    cout << "size of long double:- " << i << " " << sizeof(i) << "bytes" << endl;

    return 0;

}
