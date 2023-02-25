#include <iostream>
using namespace std;

int main()
{
    //Intializing And Declaring 2-d Array
    // int Array[2][3] = {{2, 4, 7}, {5, 6, 8}};

    //Input An Array From User
    int rowSize;
    cin>>rowSize;

    int colSize;
    cin>>colSize;

    int Array[rowSize][colSize];
    for(int row =0; row<rowSize ;row++){
        for(int col = 0 ; col<colSize ; col++){
            cin>>Array[row][col];
        }
        cout<<endl;
    }

    // For Printing 2-d Array
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout<<Array[row][col]<<" ";
        }
        cout<<endl;
    }
}