#include<iostream>
using namespace std;

int main(){
   int  u , v ,a ;
   float speed; 
   cout<<"enter 3 values : "<<endl;
   cin>>u>>v>>a;
   speed=(float) (v*v-u*u)/(2*a);
   cout<<speed;

}