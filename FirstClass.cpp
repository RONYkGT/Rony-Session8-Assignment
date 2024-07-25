#include "FirstClass.h"

First::First()
{
    // Initialize the array and pointers
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    ptr = arr;
    ptr2 = &ptr;

    cout << "Class initialized" << endl;
}

int *First::getArray()
{
    return arr;
}

int *First::getPtr()
{
    return ptr;
}

int **First::getPtr2()
{
    return ptr2;
}

void First::incrementPtr()
{
    if (ptr >= arr + arrSize - 1)
    {
        throw out_of_range("Pointer exceeds array bounds");
    }
    ptr++;
    cout << "Ptr incremented" << endl;
}

void First::incrementPtrPtr2()
{
    if (*ptr2 >= arr + arrSize - 1)
    {
        throw out_of_range("Pointer-to-pointer exceeds array bounds");
    }
    (*ptr2)++;
    cout << "PtrPtr2 incremented" << endl;
}

void First::decrementPtr()
{
    if (ptr <= arr)
    {
        throw out_of_range("Pointer is already at the beginning of the array");
    }
    ptr--;
    cout << "Ptr decremented" << endl;
}

void First::decrementPtrPtr2()
{
    if (*ptr2 <= arr)
    {
        throw out_of_range("Pointer-to-pointer is already at the beginning");
    }
    (*(ptr2))--;
    cout << "PtrPtr2 decremented" << endl;
}

void First::print()
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "**ptr2: " << **ptr2 << endl;
}
