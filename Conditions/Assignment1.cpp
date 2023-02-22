#include<iostream>
using namespace std;

int main(){
cout<<"enter bill amount: "<<endl;
float bill ;
cin>>bill;
float discount;

if(bill>=100 && bill<500){
  discount = bill*10/100;
}
else if(bill>=500){
    discount = bill*20/100;
}

cout<<"total bill: "<<bill<<endl;
cout<<"discount: "<<discount<<endl;
cout<<"dicounted bill : "<<bill-discount<<endl;








}