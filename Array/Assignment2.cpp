// Multiply two Matrices
#include <iostream>
using namespace std;

int main()
{
    cout << "enter total rows you want : " << endl;
    int totalRow;
    cin >> totalRow;

    cout << "enter total Col you want : " << endl;
    int totalCol;
    cin >> totalCol;

    int Array1[totalRow][totalCol];

    for (int row = 0; row < totalRow; row++)
    {
        for (int col = 0; col < totalCol; col++)
        {
            cin >> Array1[row][col];
        }
        cout << endl;
    }

    int Array2[totalRow][totalCol];
    for (int row = 0; row < totalRow; row++)
    {
        for (int col = 0; col < totalCol; col++)
        {
            cin >> Array2[row][col];
        }
        cout << endl;
    }

    int Array3[totalRow][totalCol];
    for (int row = 0; row < totalRow; row++)
    {
        for (int col = 0; col < totalCol; col++)
        {
            Array3[row][col] = Array1[row][col] * Array2[row][col];
        }
        cout << endl;
    }

    for (int row = 0; row < totalRow; row++)
    {
        for (int col = 0; col < totalCol; col++)
        {
            cout << Array3[row][col] << " ";
        }
        cout << endl;
    }
}
