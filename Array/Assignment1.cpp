/*
Assignment Question to Find avergae Of An Array
*/



#include <iostream>
using namespace std;

int main()
{
   int  size;
    cin >> size;
    int Array[size];
    int  sum=0;

//input Array Elements 
    for(int index=0; index<size ;index++){
        cin>>Array[index];
    }

//First We Will Sum up All Elements 
for(int index =0; index <size ;index++){
    sum = sum+Array[index];
}

float average = (float)sum / size ;
cout<<"average : " << average;
}