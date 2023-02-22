//FIND MAX ELEMENT IN ARRAY
// input : 3 5 6 7 1
//output : 7



#include <iostream>
using namespace std;

int main(){
    int A[5]={5,13,3,43,1};
    int max = A[0];
    for(int i=0; i<5 ; i++ ){
        if(max<A[i+1]){
           max = A[i+1];
        }
    }
    cout<<max;

}


//FIND MIN ELEMENT IN ARRAY
// input : 3 5 6 7 1
//output : 1



#include <iostream>
using namespace std;

int main(){
    int A[5]={5,13,3,43,1};
    int min = A[0];
    for(int i=0; i<5 ; i++ ){
        if(min>A[i+1]){
           min = A[i+1];
        }
    }
    cout<<min;

}


