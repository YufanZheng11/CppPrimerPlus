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
#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34e+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
}
```

The program in Listing 3.9 takes a number, adds 1, and then subtracts the original number.That should result in a value of 1. Does it? Here is the output from the program in Listing 3.9 for one system:
```
a = 2.34e+022
b - a = 0 // ---- float ignore the change of 1 at very end
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

