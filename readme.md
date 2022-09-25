# C++ Synax

### 1. Hello World
```cpp
#include <iostream>
using namespace std;

int main () {

    cout << "Hello World";

    return 0;

}
```
<br/>

### 2. Data Types


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

### 3. Taking user Input

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

### 4. Conditional Statements

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

// Ternary Operator

/* Condition */ ? : /* Expression 1 */ : /* Expression 2 */;
```
<br/>

### 5. Loops

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

### 6. Break and Continue

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
*/
```
<br/>

### 7. Switch - Case

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

### 8. Operators in C++
<br/>

> Assignment Operators

| Operator | Description |
| -------- | ----------- |
| + | Adds two operands |
| - | Subtracts second operand from the first |
| * | Multiplies both operands |
| / | Divides numerator by de-numerator |
| % | Modulus Operator and remainder of after an integer division |
| ++ | Increment operator, increases integer value by one |
| -- | Decrement operator, decreases integer value by one |

<br/>

> Relational Operators

| Operator | Description |
| -------- | ----------- |
| == | Checks if the values of two operands are equal or not, if yes then condition becomes true. |
| != | Checks if the values of two operands are equal or not, if values are not equal then condition becomes true. |
| > | Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true. |
| < | Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true. |
| >= | Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true |
| <= | Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true. |

<br/>

> Logical Operators

| Operator | Description |
| -------- | ----------- |
| && | Called Logical AND operator. If both the operands are non-zero, then condition becomes true. |
| &#124;&#124; | Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true. |
| ! | Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true, then Logical NOT operator will make false. |

<br/>

> Bitwise Operators

| Operator | Description |
| -------- | ----------- |
| & | Binary AND Operator copies a bit to the result if it exists in both operands. |
| &#124; | Binary OR Operator copies a bit if it exists in either operand. |
| ^ | Binary XOR Operator copies the bit if it is set in one operand but not both. |
| ~ | Binary Ones Complement Operator is unary and has the effect of 'flipping' bits. |
| << | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. |
| >> | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. |

<br/>

> Assignment Operators

| Operator | Description |
| -------- | ----------- |
| = | Simple assignment operator, Assigns values from right side operands to left side operand. |
| += | Add AND assignment operator, It adds right operand to the left operand and assign the result to left operand. |
| -= | Subtract AND assignment operator, It subtracts right operand from the left operand and assign the result to left operand. |
| *= | Multiply AND assignment operator, It multiplies right operand with the left operand and assign the result to left operand. |
| /= | Divide AND assignment operator, It divides left operand with the right operand and assign the result to left operand. |
| %= | Modulus AND assignment operator, It takes modulus using two operands and assign the result to left operand. |
| <<= | Left shift AND assignment operator. |
| >>= | Right shift AND assignment operator. |
| &= | Bitwise AND assignment operator. |
| ^= | Bitwise exclusive OR and assignment operator. |
| &#124;= | Bitwise inclusive OR and assignment operator. |

<br/>

### 9. Comments in C++

```cpp
// Single Line Comment

/*
    This is a 
    multiline comment
*/
```

### 10. Functions

```cpp
// Sample script:- script_08.cpp

returnType functionName(parameter1, parameter2, ...) {
    // function body
}
```