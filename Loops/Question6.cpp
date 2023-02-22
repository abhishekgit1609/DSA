#include <iostream>
using namespace std;

int main(){
int reverse;
int num ;
cin>>num ;



while(num>0){
     reverse =num%10;
     num =num /10;
     cout<<reverse<<endl;
}

}