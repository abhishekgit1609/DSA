//FINDING SUM OF AN ARRAY

#include <iostream>
using namespace std;

int main(){
  int A[5]={4,5,6,3,1}; 
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+A[i];
    }
    cout<<"sum: "<<sum;

  }


