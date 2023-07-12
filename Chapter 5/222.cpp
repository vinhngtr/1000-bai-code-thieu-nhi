#include <iostream>
using namespace std;

int countLocalExtr (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 1; i < size - 1; i++)
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1] ||
            arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
                count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Number of local extremas: " << countLocalExtr (arr, size) << endl;

    return 0;
}