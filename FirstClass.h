#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <iostream>
#include <stdexcept>

using namespace std;

const int arrSize = 3;

class First
{
private:
    int arr[arrSize];
    int *ptr;
    int **ptr2;

public:
    First();

    int *getArray();
    int *getPtr();
    int **getPtr2();

    void incrementPtr();
    void incrementPtrPtr2();
    void decrementPtr();
    void decrementPtrPtr2();

    void print();
};

#endif // FIRSTCLASS_H
