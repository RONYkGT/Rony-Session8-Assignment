# C++ Pointer Manipulation Example

This project demonstrates basic pointer manipulation in C++ using a class named `First`. The class manages an array and performs various operations on pointers and pointer-to-pointer variables. It includes exception handling to manage pointer bounds.

## Overview

The `First` class provides functionality to:

- Increment and decrement pointers and pointer-to-pointer variables.
- Print the contents of an array and the values pointed to by the pointers.
- Handle exceptions when pointers exceed array bounds or go out of range.

## Files

- `FirstClass.h`: Header file containing the declaration of the `First` class.
- `FirstClass.cpp`: Implementation file with the definitions of the class methods.
- `main.cpp`: Contains the `main` function to create and use an instance of the `First` class.

## Compilation

To compile the code, you need a C++ compiler. For example, using `g++`:

```bash
g++ -o program FirstClass.cpp main.cpp
```
This command compiles `FirstClass.cpp` and `main.cpp` and links them into an executable named `program`.

## Running the program
Once compiled, you can run the program with:
```bash
./program
```

## Usage
### `First` Class
- **Constructor:**
  Initializes the class and prints a message indicating that the class has been initialized.
- **Methods:**
  - `int* getArray()`: Returns a pointer to the internal array.
  - `int* getPtr()`: Returns the current value of the pointer `ptr`.
  - `int** getPtr2()`: Returns the current value of the pointer-to-pointer `ptr2`.
  - `void incrementPtr()`: Increments the pointer ptr and throws an `out_of_range` exception if it exceeds array bounds.
  - `void incrementPtrPtr2()`: Increments the pointer-to-pointer `ptr2` and throws an `out_of_range` exception if it exceeds array bounds.
  - `void decrementPtr()`: Decrements the pointer `ptr` and throws an `out_of_range` exception if it is already at the beginning of the array.
  - `void decrementPtrPtr2()`: Decrements the pointer-to-pointer `ptr2` and throws an `out_of_range` exception if it is already at the beginning.
  - `void print()`: Prints the contents of the array and the values pointed to by `ptr` and `ptr2`.
### Example
Here is an example of using the `First` class:
```cpp
int main() {
    try {
        First obj;
        obj.print();

        // Test incrementing and decrementing pointers
        cout << "Pointer points: " << *(obj.getPtr()) << endl;
        obj.incrementPtr();
        cout << "Pointer points: " << *(obj.getPtr()) << endl;

        // Further testing...
    }
    catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    return 0;
}
```
This code creates an instance of First, prints the array and pointer values, and performs various pointer manipulations, handling exceptions if they occur.
