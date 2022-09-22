# C++ Synax

> 1. Hello World
```cpp
#include <iostream>
using namespace std;

int main () {

    cout << "Hello World";

    return 0;

}
```
<br/>

> 2. Data Types


// Sample script - script_02.cpp

| Data Type | Size |
|-----------|------|
| int | 4 bytes |
| float | 4 bytes |
| char | 1 byte |
| bool | 1 byte |
| short int | 2 bytes |
| long int | 8 bytes |
| long long int | 8 bytes |
| double | 8 bytes |
| long double | 16 bytes |

<br/>

> 3. Taking user Input

```cpp
// script_03.cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    cout << "Entered number is:- " << n << endl;

    return 0;

}
```
<br/>

> 4. Conditional Statements

```cpp
// Sample script - script_04.cpp

if (/*condition*/) {
    // code
}
else if (/*condition*/) {
    // code
}
else {
    // code
}
```
<br/>

> 5. Loops

```cpp
// Sample script - script_05.cpp

// 1. for loop

for ( /* Initialize */; /*Condition*/ ; /* Counter */ ) {
    // code
}

// 2. while loop

while ( /*condition*/ ) {
    // code
}

// 3. do while loop

do {
    // code
}
while ( /*condition*/ );
```
<br/>

> 6. Break and Continue

```cpp
// Sample script - script_06.cpp

#include <iostream>
using namespace std;

int main () {

    for ( int i = 0; i < 10; i++ ) {
        if ( i == 2 ) {
            continue;
        }
        else if ( i == 6 ) {
            break;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;

}

/*
Output:-
0
1
3
4
5
```
<br/>

> 7. Switch - Case

```cpp
// Sample script - script_07.cpp 

switch ( /* expression */ ) {

    case /*value*/:
        // code
        break;

    /*
        cases
    */

    default:
        // code
        break;
}

```
<br/>