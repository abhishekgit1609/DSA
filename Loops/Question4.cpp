// FACTORS OF PROGRAM

#include <iostream>
using namespace std;

int main()
{
    int fact = 1, n=6;
    for(int i=1; i<=n ;i++){
        fact*=i;
    }
    cout<<fact;
}