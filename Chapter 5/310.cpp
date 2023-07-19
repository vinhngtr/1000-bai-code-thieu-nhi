#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size], barr[size];
    int currIdx = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (isPrime(arr[i])) 
            barr[currIdx++] = arr[i];
    }

    cout << "Generated array: ";
    for (int i = 0; i < currIdx; i++)
        cout << barr[i] << " ";
    cout << endl;

    return 0;
}