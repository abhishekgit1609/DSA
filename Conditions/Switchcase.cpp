#include<iostream>
using namespace std;
int main(){

    // int x=10;
    // switch(x){
    //     case 1:
    //     cout<<"One";
    //     break;
    //     case 2:
    //     cout<<"Two";
    //     break;
    //     case 3:
    //     cout<<"Three";
    //     break;
    //     default:
    //     cout<<"Invalid number";
    // }
    // cout<<endl;


    int x,y,choice ;
    cin>>x>>y>>choice;
    switch(choice){
        case 1:
        cout<<x+y;
        break;
        case 2:
        cout<<x-y;
        break;
        case 3:
        cout<<x*y;
        break;
        case 4:
        cout<<x/y;
        break;
       

    }
    cout<<endl<<endl;

    

}