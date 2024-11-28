#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std; // this allows std functions to be called without std::

#define variable 5 // this is a preprocessor, variable is now globally available and its value is 5

int main(){
	// to print to the console, double quotes, requires iostream library, using namespace std

    // std::cout is for printing to terminal
    // std::cin is for reading from terminal
    // std::cerr is for printing errors to the terminal
    // std::clog is for printing log messages to the console
    
	cout << "foo is here\n";
	// another way
	cout << "bar is here" << endl;
	// another way using the printf function, requires stdio library
	printf("third way to print");

	bool true_or_false; // 1 bit
	cout << "sizeof int: " << sizeof(bool) << " bit" << endl;

	short int n; // 2 bytes
	cout << "sizeof int: " << sizeof(short int) << " bytes" << endl;

	int n; // 4 bytes
	cout << "sizeof int: " << sizeof(int) << " bytes" << endl;

	signed int n; // 4 bytes
	cout << "sizeof int: " << sizeof(signed int) << " bytes" << endl;

	long int n; // 8 bytes
	cout << "sizeof int: " << sizeof(long int) << " bytes" << endl;

	unsigned long int n;// 8 bytes
	cout << "sizeof int: " << sizeof(unsigned long int) << " bytes" << endl;

	signed long int n;// 8 bytes
	cout << "sizeof int: " << sizeof(signed long int) << " bytes" << endl;

	float n;// 4 bytes
	cout << "sizeof int: " << sizeof(float) << " bytes" << endl;

	double n;// 8 bytes
	cout << "sizeof int: " << sizeof(double) << " bytes" << endl;

	char str;// 1 byte
	cout << "sizeof int: " << sizeof(char) << " bytes" << endl;

	signed char str;// 1 byte
	cout << "sizeof int: " << sizeof(signed char) << " bytes" << endl;

	unsigned char str;// 1 byte
	cout << "sizeof int: " << sizeof(unsigned char) << " bytes" << endl;

	wchar_t n;// 4 bytes
	cout << "sizeof int: " << sizeof(wchar_t) << " bytes" << endl;

	// for printf integer types
	// int => "%d"
	// long => "%ld"
	// long long => "%lld"
	// unsigned => "%u"
	// unsigned long => "%lu"
	// unsigned long long => "%llu"
	// float => "%f"
	// double => "%f"
	// long double => "%Lf"

	// when a character type exceeds size value in a loop, the result is infinite loop
	for(char n = 0; n < 300; n++){} // this is an infinite loop, char is never more than 255

	// creating a single character, single quotes only
	char single_character = 'c';

	// creating a string, must be created with double quotes
	char str[] = "this is foo"

	// creating an array of int type
	int arr[] = {0,1,2,3,4,5};

	// creating an array of fixed size
	int arr[5] = {0, 1, 2, 3, 4};

	// pointer is created with an *, and it must be the same data type as the data its pointing to
	int * pointer = &arr; 

	// pointer is derefenced by * pointer to get the value
	cout << "The pointer is derefenced, the value at this pointer is " << * pointer << endl;

	// floating arrithmetic with ints
	int numerator = 5;

	int denomicator = 15;

	double fraction = (double)numerator/denomicator;

	// struct 
	struct Node {
		int key;
		Node *left;
		Node *right;
		Node *parent;
	};

	// function for allocating a node
	Node* newNode( int key ){
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
				character = ''
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
	return 0;
}