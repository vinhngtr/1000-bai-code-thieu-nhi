#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (unsigned int i = 2; i*i <= n; i++) 
        if (!(n % i)) return false;
    return true;
}

void listPrimes (int * arr, unsigned int size)
{
    bool found = false;
    for (unsigned int i = 0; i < size; i++)
    {
        if (isPrime (arr[i]))
        {
            cout << arr[i] << " ";
            found = true;
        }
    }
    (found)? cout << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Prime elements: ";
    listPrimes (arr, size);

    return 0;
}