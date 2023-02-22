#include<iostream>
#include<math.h>
using namespace std;

int main(){
   
int a,b,c;
cout<<"enter values a,b,c: "<<endl;
cin>>a>>b>>c;
float root1,root2 ;


root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);


cout<<root1<<" "<<root2<<endl;
 
}