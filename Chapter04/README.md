## Notes

### Initialization Rules for Arrays
You can use the initialization form **only** when defining the array.You cannot use it later, 
and you **cannot** assign one array wholesale to another:
```c++
int cards[4] = {3, 6, 8, 10};   // okay
int hand[4];                    // okay
hand[4] = {5, 6, 7, 9};         // not allowed
hand = cards;                   // not allowed
```
the following statement initializes only the first two elements of hotelTips:
```c++
float hotelTips[5] = {5.0, 2.5};
```
If you leave the square brackets ([]) empty when you initialize an array, the C++ compiler counts the elements for you. 
Suppose, for example, that you make this declaration:
```c++
short things[] = {1, 5, 3, 8};
```

### C++11 Array Initialization
- can drop the = sign when initializing an array:
```c++
double earnings[4] {1.2e4, 1.6e4, 1.1e4, 1.7e4}; // okay with C++11
```
- can use empty braces to set all the elements to 0:
```c++
unsigned int counts[10] = {};   // all elements set to 0
float balances[100] {};         // all elements set to 0
```
- list-initialization protects against narrowing:
```c++
long plifs[] = {25, 92, 3.0};               // not allowed
char slifs[4] {'h', 'i', 1122011, '\0'};    // not allowed 
char tlifs[4] {'h', 'i', 112, '\0'};        // allowed
```

### string vs char
This character, written \0, is the character with ASCII code 0, and it serves to mark the string’s end.
```c++
char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};     // not a string! 
char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};    // a string!
```
```c++
char bird[11] = "Mr. Cheeps";   // the \0 is understood 
char fish[] = "Bubbles";        // let the compiler count --- recommend
```
- '' -- char
- "" -- string
the following statement assigns the value 83 to shirt_size:
```c++
char shirtSize = 'S';   // ----- shirtSize is 83 or char 'S'
```
the following attempts to assign a **memory address (!!!!)** to shirt_size:
```c++
char shirtSize = "S";   // ----- shirtSize is the memory address
```

## Problems for cin string
- The cin technique is to use whitespace—spaces, tabs, and newlines—to delineate a string.
This means cin reads just one word when it gets input for a character array. 
- the input string might turn out to be longer than the destination array. Using cin as this example did offers 
no protection against placing a longer string in a shorter array.