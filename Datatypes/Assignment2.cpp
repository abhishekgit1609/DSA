#include <iostream>
using namespace std;
/*
Write program to calclate net salary
input:
1: basic salary
2: percentage of allowance 
3: percentage of deduction

formula: netsalary = basic salary + basic salary* percentage of allowance - basic salary *percentage of deduction
*/
int main(){
    cout<<"ENTER BASIC SALARY: "<<endl;
    float salary;
    cin>>salary;
    cout<<"ENTER ALLOWANCE PERCENT : "<<endl;
    float allowance ;
    cin>>allowance ;
    cout<<"ENTER deduction PERCENT : "<<endl;
    float deduction ;
    cin>> deduction ;

    float netsalary;

    netsalary = salary +  salary * allowance/100-salary * deduction/100;

    cout<<netsalary;





}