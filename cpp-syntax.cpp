#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <limits>
#include <bitset>

using namespace std; // this allows std functions to be called without std::

#define my_variable 5 // this is a preprocessor, my_variable is now globally available and its value is 5

// compile time vs run time
// compile time is turning code into an executable binary
// run time is running the executable binary
// heavy computations should be done at comiple time because then they are only done once


// to print to the console, double quotes, requires iostream library
// using namespace std now longer requires std::<std_function> syntax

// std::cout is for printing to terminal
// std::cin is for reading from terminal
// std::cerr is for printing errors to the terminal
// std::clog is for printing log messages to the console

cout << "testing print ... \n";
// another way
cout << "another print ..." << endl;
// another way using the printf function, requires stdio library
printf("number %d in string", 0);

// printf function integer types for embedding numeric variables in strings
// int => "%d"
// long => "%ld"
// long long => "%lld"
// unsigned => "%u"
// unsigned long => "%lu"
// unsigned long long => "%llu"
// float => "%f"
// double => "%f"
// long double => "%Lf"

// use std::boolalpha to print  boolean values as true or false instead of 1 or 0
bool true_or_false = false; // 1 byte
std::cout << "\nbool = " << std::boolalpha << true_or_false << std::endl;
std::cout << "sizeof bool: " << sizeof(bool) << " byte (8 bits) for a bool" << std::endl;

short int short_integer; // 2 bytes
cout << "sizeof short int: " << sizeof(short int) << " bytes" << endl;

int an_integer = 10; // 4 bytes
// the << operater works right to left, >> works left to right
std::cout << "10 in hexadecimal: " << std::hex << an_integer << std::endl;
// std::showbase prints the base 0x
std::cout << "10 in hexadecimal: " << std::showbase << std::hex << an_integer << std::endl;
// use bitset module std::bitset<num_right_most_bits_to_extract>() to see number in binary
std::cout << "10 in binary: " << std::bitset<4>(an_integer) << std::endl;

// bitwise operations
int first_number = 3; // 0011
int second_number = 5; // 0101
std::cout << "bitwise exclusive or result: " << (first_number ^ second_number) << std::endl;
std::cout << "exclusive or result in binary: " << std::bitset<4>(first_number ^ second_number) << std::endl;
std::cout << "flip bits of 3 = 0011 in binary: " << std::bitset<4>(~first_number) << std::endl;

// constant
const int constant_integer = 1;

// limits library
unsigned int max_number = std::numeric_limits<unsigned int>::max();
std::cout << max_number << std::endl;

long a_long_number = 34345345;
cout << "the number is " << a_long_number << endl;

auto unsigned_long_auto = 34987897897898756ul; // automatically convert variable to unsigned long 8 bytes
std::cout << sizeof(unsigned_long_auto) << std::endl;

auto long_long_auto = 3456ll; // automatically convert variable to long long 8 bytes
std::cout << sizeof(long_long_auto) << std::endl;

// functions from the cmath library
float pi = std::acos(-1);
std::cout << "pi = " << pi << std::endl;
std::cout << "-pi: " << -pi << std::endl;
std::cout << "Rounding down pi: " << std::floor(pi) << std::endl;
std::cout << "Rounding up pi: " << std::ceil(pi) << std::endl;
std::cout << "Absolute value of -pi: " << std::abs(-pi) << std::endl;

std::cout << "e = " << std::exp(1) << std::endl;
std::cout << "log(e) = " << std::log(std::exp(1)) << std::endl;
std::cout << "log10(1000) = " << std::log10(1000) << std::endl;

float x_float = 1.5;
float y_float = 3.5;

// casting types
// C++ new way of casting
int z_integer = static_cast<int>(x_float) + static_cast<int>(y_float);
// old way of casting in C
int z_old_cast = (int)x_float + (int)y_float;

std::cout << "static_cast z = " << z_integer << std::endl;
std::cout << "old c type conversion z = " << z_old_cast << std::endl;

// creating an array of int type
int arr[] = { 0, 1, 2, 3, 4, 5 };

// creating an array of fixed size
int arr[5] = { 0, 1, 2, 3, 4 };

// extracting values out of arrays without index
int array_of_integers[] = { 4, 96, 1, 89, 0, 5 };
for (int num : array_of_integers){
    std::cout << num << std::endl;
}

// get the length of the array
// old way: use c++ built in function sizeof(), note: subject to overflow/underflow
int length_of_array_old_way = sizeof(array_of_integers) / sizeof(array_of_integers[0]);
// new way: use standard library's std::size() function
int length_of_array_new_way = std::size(array_of_integers);

std::cout << "length of array: " << length_of_array_old_way << std::endl;
std::cout << "length of array: " << length_of_array_new_way << std::endl;

// matrix height and width
// if the matrix is initialized with some rows having less values than should be,
// the compiler will fill the rest of the row with 0
int matrix[3][4];
int matrix_height = std::size(matrix);
int matrix_width = std::size(matrix[0]);
cout << "matrix height: " << matrix_height << endl;
cout << "matrix width: " << matrix_width << endl;



/////////////////////////////////////////////////////////////////////
//////////////////////// START - STRINGS ////////////////////////////
/////////////////////////////////////////////////////////////////////


// creating a single character, single quotes only, takes 1 byte (or 8 bits)
char single_character = 'c';

char a = 97; 
std::cout << "char 97 is " << a << std::endl; // prints 'a', not 97 because of char

// when a character type exceeds size value in a loop, the result is infinite loop
for(char n = 0; n < 300; n++){} // this is an infinite loop, char is never more than 255

// creating a string, must be created with double quotes
// in some cases, the string termination character '\0' is not needed
char example_string[] = "this is an example string\0";

for (char s : example_string){
    cout << s;
}
// another way to print the array of string
std::cout << example_string << std::endl;

// getting the length of a string
char example_string[] = "this is a string\0";
int length_of_string = strlen(example_string); // strlen() is from the string.h module

cout << "length_of_string: " << length_of_string << endl;


char some_character = 'x';
char *pointer_some_character = &some_character;

cout << "The pointer itself points to the value: " << pointer_some_character << endl;
cout << "Dereferencing the pointer also points to the value: " << *pointer_some_character << endl;


// looping through constant string with pointer, note: string here is a constant
const char *pointer_string_constant = "this is a string\0";

cout << "pointer_string_constant the whole string: " << pointer_string_constant << endl;
cout << "*pointer_string_constant points to first letter: " << *pointer_string_constant << endl;

while (*pointer_string_constant != '\0'){
    cout << *pointer_string_constant;
    pointer_string_constant += 1;
}


/////////////// START - CHANGEABLE ARRAY OF STRINGS ///////////////

const char *array_of_strings[] = { "one", "two", "three", "four" };

cout << "array_of_strings points to an address: " << array_of_strings << endl;
cout << "*array_of_strings points is the first element: " << *array_of_strings << endl;

// prints one by one
for (const char * string : array_of_strings){
    cout << string << endl;
}

// array_of_strings' last value is changed
const char * new_character = "zero";
array_of_strings[3] = new_character;

cout << endl;
for (const char * string : array_of_strings){
    cout << string << endl;
}

//////////////// END - CHANGEABLE ARRAY OF STRINGS ////////////////

///////////// START - NON CHANGEABLE ARRAY OF STRINGS /////////////

// change the array above to put const after the *
const char *array_of_strings[] = { "one", "two", "three", "four" };

// now the array_of_strings is not modifiable, note: removing the left most const
// could produce warnings but not a compiler error
const char * const array_of_strings[] = { "one", "two", "three", "four" };

////////////// END - NON CHANGEABLE ARRAY OF STRINGS //////////////

////////////// START - LOOPING THROUGH A STRING ///////////////////
void my_print(char string[]){ // char string[] is the same as char *string
    int i = 0;
    while(*(string + i) != '\0'){
    // while(string[i] != '\0'){ // same while loop
        cout << string[i]; // string[i] is the same as *(string + i)
        i += 1;
    }
}

// another way to write my_print()
void my_print(char string[]){
    while(*string != '\0'){
        cout << *string; // string is a pointer
        string += 1;
    }
}

int main(){

    char example_string[] = "this is an example string\0";
    my_print(example_string);

    return 0;
}

/////////////// END - LOOPING THROUGH A STRING ////////////////////

/////////////////////////////////////////////////////////////////////
////////////////////////// END - STRINGS ////////////////////////////
/////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////
///////////////// START - LOOPING THROUGH ARRAYS ////////////////////
/////////////////////////////////////////////////////////////////////

// REVERSE ARRAY //

// int *pointer_primes is the same as int pointer_primes[]
// just using the name of the array is equivalent to the address 
// of the first element of the array
// void reverse_primes(int primes[], int num_primes){
void reverse_primes(int *pointer_primes, int num_primes){
    int *end = pointer_primes + num_primes - 1;
    int temp;
    while (pointer_primes <= end){
        temp = *pointer_primes;
        *pointer_primes = *end;
        *end = temp;
        pointer_primes += 1;
        end -= 1;
    }
}

int main(){

    int primes[] = { 2, 3, 5, 7, 11, 13, 17 };
    int num_primes = size(primes);
    int *pointer_primes = primes;

    reverse_primes(pointer_primes, num_primes);

    for (int i = 0; i < num_primes; i++){
        cout << primes[i] << " ";
    }

    return 0;
}


// SUMMING AN ARRAY //

// just using the name of the array is equivalent to the address 
// of the first element of the array
// int primes[] is the same as int *primes, remember int primes[] is a pointer
// and primes[i] is the same *(primes + i)
int add_primes(int primes[], int num_primes){
    int total = 0;
    for (int i = 0; i < num_primes; i++){
        total += primes[i]; // primes[i] is same as *(primes + i)
    }
    return total;
}

int main(){

    int primes[] = { 2, 3, 5, 7, 11, 13, 17 };
    int num_primes = size(primes);

    int sum_of_primes = add_primes(primes, num_primes);

    cout << "sum of primes: " << sum_of_primes;

    return 0;
}

//////// START - DYNAMIC HEAP MEMORY ALLOCATION //////////

void reverse_primes(int primes_start_pointer[], int num_primes){
    int *primes_end_pointer = primes_start_pointer + num_primes - 1;
    int temp;
    while (primes_start_pointer <= primes_end_pointer){
        temp = *primes_start_pointer;
        *primes_start_pointer = *primes_end_pointer;
        *primes_end_pointer = temp;
        primes_start_pointer += 1;
        primes_end_pointer -= 1;
    }
}

int main(){

    int num_primes = 5;
    int *heap_memory_primes = new int[num_primes];

    heap_memory_primes[0] = 2;
    heap_memory_primes[1] = 3;
    heap_memory_primes[2] = 5;
    heap_memory_primes[3] = 7;
    heap_memory_primes[4] = 11;

    reverse_primes(heap_memory_primes, num_primes);

    for (int i = 0; i < num_primes; i++){
        cout << heap_memory_primes[i] << " ";
    }

    delete[] heap_memory_primes;

    return 0;
}

///////// END - DYNAMIC HEAP MEMORY ALLOCATION ///////////

/////////////////////////////////////////////////////////////////////
////////////////// END - LOOPING THROUGH ARRAYS /////////////////////
/////////////////////////////////////////////////////////////////////

// struct 
struct Node {
    int key;
    Node *left;
    Node *right;
    Node *parent;
};

// function for allocating a node
Node *newNode(int key){
    Node* n = new Node;
    n->key = key;
    n->left = nullptr;
    n->right = nullptr;
    n->parent = nullptr;
    return n;
}


// setting up a class
class Made_up_class {

    // private variables and functions
    private:

    // public variables and functions
    public:
        int n;
        char character;
        // this is a constructor that doen't require objects to have required variables
        Made_up_class(){
            n = 0;
            character = '';
        }

        // this is a defined constructor object
        Made_up_class(int number, char single_character){
            n = number;
            character = single_character;
        }
}

// creating a vector out of an existing array
int existing_array[] = {5,3,6,7,2,1,0,50};

std::vector<int> make_vector_out_of_array(existing_array, 
                                            existing_array + in_int_size_of_existing_array);

// to not use std::sort and just use sort, type: using namespace std; at the top
// sorting an array
// full sort
std::sort(my_vector.begin(), my_vector.end());
// partial sort from beginning to somewhere in the middle
std::sort(my_vector.begin(), my_vector.end() + number);
// partial sort starting from the middle somewhere up to end
std::sort(my_vector.begin() + number, my_vector.end());

// convert string to number
// if string_pointer is not null, function will set set value of idx to position of
// first character
int string_to_integer = std::stoi(string, string_pointer_called_idx, specify_base_here)

// for loop with auto before beginning of the loop
for(auto i = variable_here; variable_here < something; variable_here increment/decrement){}

// pushing and popping from array vector 
my_vector.push_back(*pointer_to_some_value)
my_vector.pop_back()

// string length
str.length()

// unordered hashmap
std::unordered_map<std::string, int> hashmap_name;
hashmap_name["key"] = 1;

// // check if key is present
// if(hashmap_name.find("key") != hashmap_name.end())