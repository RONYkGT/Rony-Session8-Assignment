#include <iostream>
#include <stdexcept>
#include "FirstClass.h"

using namespace std;


int main() {
    try {
        First obj;
        obj.print();

        // Test incrementing and decrementing pointers
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;
        obj.incrementPtr();
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;
        obj.incrementPtr();
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;
        obj.incrementPtr(); // May throw exception if ptr exceeds bounds
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;

        obj.decrementPtr();
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;
        obj.decrementPtr(); // May throw exception if ptr is at the start
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;

        obj.incrementPtrPtr2(); // May throw exception if ptr2 exceeds bounds
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;
        obj.decrementPtrPtr2(); // May throw exception if ptr2 is at the start
        cout << "Pointer points: "<< *(obj.getPtr()) << endl;

        obj.print();
    }
    catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    return 0;
}
