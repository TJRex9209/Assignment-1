// this is the header guard
#ifndef _VECTORCLASS_H_
#define _VECTORCLASS_H_
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Vector131
{
public:
    Vector131(); // this is the declaration for the constructor

    void vPushBack(int back_varaible); // this is the declaration for the pushback function

    void vPushFront(int front_variable); // this is the declaration for the push front function

    void vResize(int newSize); // this is the declaration for the resize function

    int vSize(void); // this is the declaration for the size function

    void vPrint(void); // this is the declaration for the print function

private:
    list<int> mainvect; // these are the private members
};

#endif
// this is the header closer