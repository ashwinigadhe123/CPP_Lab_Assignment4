#include <iostream>
using namespace std;
 
// Swap two numbers using pointers
void swapByPointer(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
 
// Swap two numbers using references
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
 
int main()
{
    int x, y;
 
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
 
    int *ptr = &x;   // pointer storing the address of x
    int &ref = x;    // reference (another name) for x
 
    cout << "\nBefore swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "Value of x using pointer: " << *ptr << endl;
    cout << "Value of x using reference: " << ref << endl;
 
    if (ptr == &ref)
    {
        cout << "Pointer and reference point to the same variable." << endl;
    }
 
    swapByPointer(&x, &y);
    cout << "\nAfter swapping using pointers:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
 
    swapByReference(x, y);
    cout << "\nAfter swapping using references:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
 
    return 0;
}
