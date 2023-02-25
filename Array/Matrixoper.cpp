//Added 2 Matrices 
#include <iostream>
using namespace std;
int main()
{

    int Array1[2][3] = {{2, 5, 9}, {7, 3, 6}};
    int Array2[2][3] = {{6, 3, 4}, {9, 5, 2}};
    int Array3[2][3];

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            Array3[row][col] = Array1[row][col] + Array2[row][col];
        }
        cout << endl;
    }

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            cout << Array3[row][col] << " ";
        }
        cout << endl;
    }
}