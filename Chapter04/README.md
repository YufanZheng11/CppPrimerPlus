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

### Problems for cin string
- The cin technique is to use whitespace—spaces, tabs, and newlines—to delineate a string.
This means cin reads just one word when it gets input for a character array. 
- the input string might turn out to be longer than the destination array. Using cin as this example did offers 
no protection against placing a longer string in a shorter array.

### Reading String Input a Line at a Time
- getline()
  - discards the newline character
  - The getline() member function stops reading input when 
    - it reaches this numeric limit or 
    - when it reads a newline character, whichever comes first.
```c++
// cin.getline()
char name[AR_SIZE];
char dessert[AR_SIZE];

cin.getline(name, AR_SIZE);
cin.getline(dessert, AR_SIZE);
```
- get()
  - leaves newline character in the input queue
```c++
// cin.get()
char name[AR_SIZE];
char dessert[AR_SIZE];

// ------ pay attention to the .get() at the end
cin.get(name, AR_SIZE).get();
cin.get(dessert, AR_SIZE).get();
```
- Because the first call leaves the newline character in the input queue, that newline character is the first character the second call sees.
- Thus,get() concludes that it’s reached the end of line without having found anything to read.Without help,get() just can’t get past that newline character.

### Why use get() instead of getline()?
- First, older implementations may not have getline(). 
- Second, get() lets you be a bit more careful. 
  - Suppose, for example, you used get() to read a line into an array. How can you tell if it read the whole line rather than stopped because the array was filled? 
  - Look at the next input character. If it is a newline character, then the whole line was read. If it is not a newline character, then there is still

### char[] init
```c++
char charr[20];
string str;

// ------- Init charr[20], the \0 will be randomly located
cout << "Length of string in charr before input: " << strlen(charr) << endl;
cout << "Length of string in str before input: " << str.size() << endl;
```
```
Length of string in charr before input: 6
Length of string in str before input: 0
```

### struct definition with inits
```c++
struct perks {
  int key_number;
  char car[12];
} mr_smith, ms_jones; // two perks variables
```
```c++
struct perks {
  int key_number;
  char car[12]; 
} mr_glitz =
{
  7,            // value for mr_glitz.key_number member 
  "Packard"     // value for mr_glitz.car member
};
```
```c++
struct // no tag 
{
  int x; // 2 members
  int y;
} position; // a structure variable
```