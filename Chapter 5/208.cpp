#include <iostream>
#include <cmath>
using namespace std;

bool isSquare (int n)
{ return sqrt(n) * sqrt(n) == n; }

int sum (int * arr, unsigned int size)
{
    int sum = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isSquare(arr[i])) sum += arr[i];
    return sum;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of all square number: " << sum (arr, size) << endl;

    return 0;
}