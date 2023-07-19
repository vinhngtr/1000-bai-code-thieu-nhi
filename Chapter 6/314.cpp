#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix (double ** matrix, int row, int col)
{
    cout << "Your matrix: " << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            cout << setw(6) << setprecision(2)
                 << fixed << matrix[r][c];
        cout << endl << endl;
    }
}

void takeInputMatrix (double ** matrix, int row, int col)
{
    cout << "Entries (row by row): " << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            cin >> matrix[r][c];
}

int main ()
{
    cout << "Dimension (row, column): ";
    int row, col; cin >> row >> col;

    double ** matrix = new double * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new double [col];

    takeInputMatrix (matrix, row, col);
    printMatrix (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}