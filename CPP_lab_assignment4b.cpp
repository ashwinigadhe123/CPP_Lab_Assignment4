#include <iostream>
using namespace std;
 
int main()
{
    int n;
 
    cout << "Enter number of elements: ";
    cin >> n;
 
    if (n <= 0)
    {
        cout << "Invalid number of elements." << endl;
        return 0;
    }
 
    int *arr = new int[n];   // dynamic array of n integers
    int *sum = new int;      // dynamic single integer
    *sum = 0;
 
    cout << "Memory allocated using new." << endl;
 
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        *sum = *sum + arr[i];
    }
 
    cout << "\nElements entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
 
    cout << "\nSum = " << *sum << endl;
    cout << "Average = " << (float)(*sum) / n << endl;
 
    delete sum;       // release single variable
    delete[] arr;     // release array
 
    cout << "\nMemory released using delete." << endl;
 
    return 0;
}
