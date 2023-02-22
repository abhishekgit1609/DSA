#include <iostream>
using namespace std;


int main(){
 
 int A[5]={2,4,5,6,1};
 int *p=A , *q=&A[3];

cout<<*(p)<<endl;
cout<<*(p+3)<<endl;

cout<<p<<endl;
// Printing an array pointer
for(int i=0; i<5 ;i++){
    cout<<*(A+i)<<" ";
}

for(int i=0 ;i<5 ;i++){
    cout<<*p<<endl;
    p++;
}

cout<<p<<endl;

//DIFFERENCE BETWEEN TWO POINTERS
cout<<q-p;








}