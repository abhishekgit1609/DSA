//HOW TO DECLARE AND INITIALIZE ARRAY 

#include <iostream>
using namespace std;

int main()
{
    int A[5] = {3, 4, 5, 6, 3};
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    for(int x:A){
        cout<<x<<" ";
    }
}
