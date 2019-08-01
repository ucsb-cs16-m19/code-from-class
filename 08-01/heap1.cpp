#include <iostream>
using namespace std;

int *createAnInt() {
    // new takes a type, returns a pointer to something of that 
    // type on the heap

    int *pointer_to_int_on_the_heap = new int;
    // pointer_to_int_on_the_heap will hold the address of this brand new
    // int on the heap

    return pointer_to_int_on_the_heap;
}

int main(int argc, char *argv[])
{
    int *p = createAnInt(); 
    // even though createAnInt returned, the address that it returned
    // is pointing to something on the heap that lives for as long as
    // we want it to

    *p = 5;

    cout << *p << endl;

    // now I'm done with the integer pointed to by p
    // I can delete it

    // delete takes a pointer to something on the heap, and gets rid of it
    delete p;

    return 0;
}