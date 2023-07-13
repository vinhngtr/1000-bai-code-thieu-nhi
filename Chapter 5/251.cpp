#include <iostream>
using namespace std;

bool isAllEqual (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        if (!((arr[i] != arr[i + 1]))) return false;
    return true;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "All equal? ";
    (isAllEqual (arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}