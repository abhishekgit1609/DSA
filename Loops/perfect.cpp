//PERFECT NUMBER

#include <iostream>
using namespace std;

int main(){
   int n=8 , sum =0;
   for(int i=1; i<=n ;i++){
    if(n%i==0){
        sum=sum+i;
    }
   }
    if(2*n==sum){
        cout<<"perfect number";
    }
    else{
        cout<<"not perfect number";
    }
   
}

