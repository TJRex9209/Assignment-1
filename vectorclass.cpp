#include <iostream>
#include <iomanip>
#include <vector>
#include "vectorclass.h"
using namespace std;
// this is the implemtation file

Vector131::Vector131() // constructor

{
    cout << "Creating an object" << endl;
}

void Vector131::vPushBack(int back_varaible) // defines vPushBack function with back-variable
{
    mainvect.push_back(back_varaible);
}

void Vector131::vPushFront(int front_variable) // defines vPushFront function with  front-variable
{
    mainvect.push_front(front_variable);
}

void Vector131::vResize(int newSize) // defines vResize function with newSize
{
    mainvect.resize(newSize);
}

int Vector131::vSize() // defines class function vSize
{
    return mainvect.size();
}

void Vector131::vPrint()
{
    cout << "Inside the vector right now is : \n";  //Prints out main vector list
    for (auto v : mainvect)
    {
        cout << v << ' ';
    }
    cout << endl;
}
