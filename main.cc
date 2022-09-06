#include <iostream>
#include "vectorclass.h" // this is how we implement the vector.class.h file
using namespace std;

int main()
{

    Vector131 vect1; // this will create our object

    cout << "currently the size of the vector is : " // this will display the elements
         << vect1.vSize() << endl;                   // currrently in the vector

    vect1.vPushBack(20);  // this will push the vector back and add '20' as an element
    vect1.vPushFront(10); // this will push the vector frontward and add '10' as an element

    cout << "Currently the size of the vector is : " // this will display the elements
         << vect1.vSize() << endl;                   // currrently in the vector

    vect1.vPrint(); // this will print out the elements in the functions

    vect1.vResize(3); // this will change the size of the vector from 2 to 7

    cout << "Currently the size of the vector is : " // this will display the elements
         << vect1.vSize() << endl;                   // currrently in the vector

    vect1.vPrint(); // this will print out the elements in the functions

    vect1.vPushBack(75); // this will push the vector back and add '75' as an element
    vect1.vPushFront(5); // this will push the vector frontward and add '5' as an element

    vect1.vPrint(); // this will print out the vector
    return 0;
}