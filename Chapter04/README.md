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

### Union
- A union is a data format that can hold different data types but only one type at a time.
- the size of the union is the size of its largest member.
- !!! -- One use for a union is to save space when a data item can use two or more formats but never simultaneously.
```c++
struct widget {
  char brand[20]; 
  int type; 
};

union id
{
    long id_num;
    char id_char[20];
} id_val;

...
widget prize; 
...

if (prize.type == 1)
    cin >> prize.id_val.id_num;
else
    cin >> prize.id_val.id_char;
```

### Enumerations
```c++
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
```
- It makes spectrum the name of a new type; spectrum is termed an enumeration, much as a struct variable is called a structure.
- It establishes red, orange, yellow, and so on, as symbolic constants for the integer values 0–7.These constants are called enumerators.
```c++
spectrum band;          // band a variable of type spectrum

band = blue;            // valid, blue is an enumerator 
band = 2000;            // invalid, 2000 not an enumerator

band = orange;          // valid
++band;                 // not valid, ++ discussed in Chapter 5 
band = orange + red;    // not valid, but a little tricky

int color = blue;       // valid, spectrum type promoted to int
band = 3;               // invalid, int not converted to spectrum 
color = 3 + red;        // valid, red converted to int

band = spectrum(3);     // typecast 3 to type spectrum
band = spectrum(40003); // undefined
```

### Setting Enumerator Values
```c++
enum bits{one = 1, two = 2, four = 4, eight = 8};

enum bigstep{first, second = 100, third};   // third is 101

enum {zero, null = 0, one, numero_uno = 1}; // zero & null are 0s and one and numero_uno are 1
```

### Value Ranges for Enumeration
```c++
enum bits{one = 1, two = 2, four = 4, eight = 8}; 
bits myflag;

myflag = bits(6); // valid, because 6 is in bits range
```

### Pointer Danger
!!! --- One extremely important point is that when you create a pointer in C++, the computer allocates memory to hold an address, 
but it does not allocate memory to hold the data to which the address points.
```c++
long * fellow; // create a pointer-to-long
*fellow = 223323; // place a value in never-never land
```
Sure, fellow is a pointer. But where does it point? The code failed to assign an address to fellow. 
So where is the value 223323 placed? We can’t say. Because fellow wasn’t initialized, 
it could have any value.Whatever that value is, the program interprets it as the address at which to store 223323. 
If fellow happens to have the value 1200, then the computer attempts to place the data at address 1200, 
even if that happens to be an address in the middle of your program code. 
Chances are that wherever fellow points, that is not where you want to put the number 223323.
This kind of error can produce some of the most insidious and hard-to-trace bugs.

**!!!!!!! Caution !!!!!!!**
- Pointer Golden Rule: 
  - Always initialize a pointer to a definite and appropriate address before you apply the dereferencing operator (*) to it.

### Memory Allocation
- Variables -- Stack
- new ***** -- Heap

### delete pointers
- use delete by following it with a pointer to a block of memory originally allocated with new:
```c++
int * ps = new int; // allocate memory with new
. . .               // use the memory
delete ps;          // free memory with delete when done
```
**Rules**
- Always use new & delete after no longer using it
  - If no, will potentially result in memory leak -- memory that has been allocated but can no longer be used.
- should not attempt to free a block of memory that you have previously freed.
- cannot use delete to free memory created by declaring ordinary variables:
```c++
int* ps = new int;  // ok
delete ps;          // ok
delete ps;          // -- not ok

int jugs = 5;       // ok
int* pi = &jugs;    // ok
delete pi;          // -- not ok
```
