#include <iostream>
using namespace std;

int main () {

    int marks = 78;

    if ( marks > 50 && marks <= 100 ) {
        cout << "Above average" << endl;
    }

    else if ( marks <= 50 ) {
        cout << "Below average" << endl;
    }

    else {    
        cout << "Invalid marks" << endl;
    }

    marks > 50 ? cout << "Above average" << endl: cout << "Below average" << endl;

    return 0;

}
