#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the year: " << endl;
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "leap year";
            }
            else
            {
                cout << "not leap year";
            }
        }
        else
        {
            cout << "leap year";
        }
    }
}