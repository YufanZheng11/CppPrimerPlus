## Notes

### std::cout display fixed floating precisions
```c++
cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
```

### Floating value precision
Remember, floating-point constants are type **double by default**.
- float can guarantee about 6 precision
- double can guarantee about 15 precision
```c++
float a = 2.34e+22f;
float b = a + 1.0f;

cout << "a = " << a << endl;
cout << "b - a = " << b - a << endl;
```

The program in Listing 3.9 takes a number, adds 1, and then subtracts the original number.That should result in a value of 1. Does it? Here is the output from the program in Listing 3.9 for one system:
```
a = 2.34e+022
b - a = 0           // ---- float ignore the change of 1 at very end
```
The problem is that 2.34E+22 represents a number with 23 digits to the left of the decimal. By adding 1, you are attempting to add 1 to the 23rd digit in that number. But type float can represent only the first 6 or 7 digits in a number, so trying to change the 23rd digit has no effect on the value.

### Mod operator %
Both operands must be integer types; using the % operator with floating-point values causes a compile-time error.
```c++
// Good
int a = 210 % 10;
// Bad - causes a compile-time error.
int b = 20.1 % 10.2
```

### Potential Numeric Conversion Problems
| Conversion Type | Potential Problems |
| ---- | ---- |
| Bigger floating-point type to smaller floating-point type, such as double to float | Loss of precision (significant figures); value might be out of range for target type, in which case result is undefined.|
| Floating-point type to integer type | Loss of fractional part; original value might be out of range for target type, in which case result is undefined. |
| Bigger integer type to smaller integer type, such as long to short | Original value might be out of range for target, type; typically just the low-order bytes are copied. |
```c++
float tree = 3;
int guess = 3.9832;
int debt = 7.2E12;
cout << "tree = " << tree << endl;
cout << "guess = " << guess << endl;
cout << "debt = " << debt << endl;
```
```c++
tree = 3.000000
guess = 3       // fraction part missing
debt = 4098     // out of range
```

### Integral promotions 
```c++
short chickens = 20; // line 1 
short ducks = 35; // line 2 
short fowl = chickens + ducks; // line 3
```
To execute the statement on line 3, a C++ program takes the values of chickens and ducks and **converts 
both to int**. Then the program **converts the result back to type short** because the answer is assigned to a 
type short variable.You might find this a bit round about, but it does make sense.The int type is 
generally chosen to be the computer’s most natural type, which means the computer probably does calculations 
fastest for that type.
```c++
9.0 / 5
```
Divides 9.0 by 5. Because 9.0 is type double, the program converts 5 to type double before it does the division.

### Type casts
```c++
(long) thorn // returns a type long conversion of thorn 
long (thorn) // returns a type long conversion of thorn

static_cast<typeName> (value) // converts value to typeName type
```
Stroustrup felt that the traditional C-style type cast is dangerously unlimited in its possibilities.
The static_cast<> operator is more restrictive than the traditional type cast.

### auto Declarations in C++11
use auto instead of the type name in an initializing declaration, 
and the compiler assigns the variable the same type as that of the initializer:
```c++
auto n = 100; // n is int
auto x = 1.5; // x is double 
auto y = 1.3e12L; // y is long double
```
Automatic type deduction becomes much more useful when dealing with complicated types, 
such as those in the STL (Standard Template Library). For example, C++98 code might have this:
```c++
std::vector<double> scores; 
std::vector<double>::iterator pv = scores.begin();
```
C++11 allows you to write this instead:
```c++

std::vector<double> scores; 
auto pv = scores.begin();
```