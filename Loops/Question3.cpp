#include <iostream>
using namespace std;

int main()
{
    int n=5, fact=1, i;
    for(int i=1; i<=n ;i++){
        fact *= i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;
}